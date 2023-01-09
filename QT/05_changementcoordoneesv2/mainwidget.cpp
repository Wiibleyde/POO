#include "mainwidget.h"
#include "moncanevas.h"
#include <QLabel>
#include <QSlider>
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>


MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    MonCanevas *canevas = new MonCanevas();
    // ajouter 2 sliders slidEchX et slidEchY + bouton quitter
    QSlider *slidEchX = new QSlider(Qt::Horizontal);
    slidEchX->setRange(5, 500);
    slidEchX->setValue(50);
    QSlider *slidEchY = new QSlider(Qt::Horizontal);
    slidEchY->setRange(5, 500);
    slidEchY->setValue(50);
    QPushButton *qpbQuitter = new QPushButton("&Quitter");

    QGridLayout *qgl = new QGridLayout();
    qgl->addWidget(canevas, 0, 0, 1, 5);
    qgl->addWidget(new QLabel("Echelle X : "), 1, 0);
    qgl->addWidget(slidEchX, 1, 1, 1, 4);
    qgl->addWidget(new QLabel("Echelle Y : "), 2, 0);
    qgl->addWidget(slidEchY, 2, 1, 1, 4);
    qgl->addWidget(qpbQuitter, 3, 4);
    setLayout(qgl);

    // connecter les signaux aux slots
    connect(slidEchX, &QSlider::valueChanged, canevas, &MonCanevas::changeUniteX);
    connect(slidEchY, &QSlider::valueChanged, canevas, &MonCanevas::changeUniteY);
    connect(qpbQuitter, &QPushButton::clicked, qApp, &QApplication::quit);
}

MainWidget::~MainWidget()
{
}

