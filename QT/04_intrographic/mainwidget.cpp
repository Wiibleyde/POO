#include "mainwidget.h"
#include "moncanvas.h"
#include <QSlider>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    // Créer les objets graphiques (pointeurs)
    MonCanvas *canvas = new MonCanvas();
    QSlider *qs_x = new QSlider(Qt::Horizontal);
    qs_x->setRange(0, 1300);
    qs_x->setValue(100);
    QSlider *qs_y = new QSlider(Qt::Horizontal);
    qs_y->setRange(0, 700);
    qs_y->setValue(100);
    QSlider *qs_rayon = new QSlider(Qt::Horizontal);
    qs_rayon->setRange(10, 500);
    qs_rayon->setValue(50);
    QSlider *qs_epaisseur = new QSlider(Qt::Horizontal);
    qs_epaisseur->setRange(0, 20);
    qs_epaisseur->setValue(5);
    QPushButton *qpb_fondRouge = new QPushButton();
    qpb_fondRouge->setStyleSheet("background-color: red");
    QPushButton *qpb_fondVert = new QPushButton();
    qpb_fondVert->setStyleSheet("background-color: green");
    QPushButton *qpb_fondBleu = new QPushButton();
    qpb_fondBleu->setStyleSheet("background-color: blue");
    QPushButton *qpb_quitter = new QPushButton("&Quitter");
    // Créer un layout
    QGridLayout *qgl = new QGridLayout();
    // Ajouter les objets graphiques au layout et y insérer les objets graphiques
    qgl->addWidget(canvas, 0, 0, 1, 2);
    qgl->addWidget(qpb_quitter, 5, 4);
    qgl->addWidget(new QLabel("X"), 2, 0);
    qgl->addWidget(qs_x, 2, 1);
    qgl->addWidget(new QLabel("Y"), 3, 0);
    qgl->addWidget(qs_y, 3, 1);
    qgl->addWidget(new QLabel("Rayon"), 4, 0);
    qgl->addWidget(qs_rayon, 4, 1);
    qgl->addWidget(new QLabel("Epaisseur"), 5, 0);
    qgl->addWidget(qs_epaisseur, 5, 1);
    qgl->addWidget(qpb_fondRouge, 2, 2);
    qgl->addWidget(qpb_fondVert, 3, 2);
    qgl->addWidget(qpb_fondBleu, 4, 2);
    setLayout(qgl);
    // Connecter les événements des objets graphiques à des actions
    connect(qpb_quitter, &QPushButton::clicked, qApp, &QApplication::quit);
    connect(qs_x, &QSlider::valueChanged, canvas, &MonCanvas::changeX);
    connect(qs_y, &QSlider::valueChanged, canvas, &MonCanvas::changeY);
    connect(qs_rayon, &QSlider::valueChanged, canvas, &MonCanvas::changeRayon);
    connect(qs_epaisseur, &QSlider::valueChanged, canvas, &MonCanvas::changeEpaisseur);
    connect(qpb_fondRouge, &QPushButton::clicked, canvas, &MonCanvas::changeFondRouge);
    connect(qpb_fondVert, &QPushButton::clicked, canvas, &MonCanvas::changeFondVert);
    connect(qpb_fondBleu, &QPushButton::clicked, canvas, &MonCanvas::changeFondBleu);
}

MainWidget::~MainWidget()
{

}

