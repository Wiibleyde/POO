#include "canevas.h"

#include <QPainter>
#include <QMouseEvent>
#include <QImage>

void Canevas::setMoteur(MoteurSudoku *newMoteur)
{
    moteur = newMoteur;
}

Canevas::Canevas(QWidget *parent)
    : QWidget{parent}
{

}

void Canevas::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QImage image(":/ressources/grilleVide.png");
    painter.drawImage(0,0,image);
    painter.setFont(QFont("Arial",40, QFont::Bold));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int valeur = moteur->getValeur(i,j);
            if (valeur != 0)
            {
                painter.drawText(10 + (j+0.3) * 100, 60 + (i+0.1) * 100, QString::number(valeur));
            }
        }
    }
}

void Canevas::mousePressEvent(QMouseEvent *event)
{
    int xSouris = event->pos().x();
    int ySouris = event->pos().y();
    int xCase = (xSouris - 2) / 100;
    int yCase = (ySouris - 2) / 100;
    qDebug() << "Case : " << xCase << " " << yCase;
}
