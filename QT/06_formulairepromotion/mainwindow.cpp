#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "moteursudoku.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MoteurSudoku *moteur = new MoteurSudoku();
    moteur->setValeur(0,3,1);
    moteur->setValeur(0,4,4);
    moteur->setValeur(8,1,3);
    ui->canevas->setMoteur(moteur);
}

MainWindow::~MainWindow()
{
    delete ui;
}

