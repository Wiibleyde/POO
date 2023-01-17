#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QBarSet *sets[] = {
        new QBarSet("Jacques"), new QBarSet("Lionel"), new QBarSet("Edith"), new QBarSet("Michel"), new QBarSet("Fleur")
    };
    *sets[0] << 30 << 40 << 10 << 20 << 10 << 60;
    *sets[1] << 10 << 30 << 42 << 15 << 81 << 75;
    *sets[2] << 80 << 100 << 70 << 13 << 60 << 20;
    *sets[3] << 30 << 10 << 80 << 70 << 60 << 45;
    *sets[4] << 100 << 40 << 70 << 30 << 16 << 42;

    QBarSeries *series = new QBarSeries();
    for(int i=0;i<5;i++)
        series->append(sets[i]);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Exemple de barres en QT");
    //chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Jan" << "Fév" << "Mar" << "Avr" << "Mai" << "Jun";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->setAxisX(axis, series);

    QValueAxis *axisY = new QValueAxis();
    axisY->setMax(100);
    axisY->setTickCount(6);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setParent(ui->horizontalFrame);
    chartView->setGeometry(QRect(0, 0, 781, 541));
}

MainWindow::~MainWindow()
{
    delete ui;
}

