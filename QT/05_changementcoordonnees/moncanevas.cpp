#include "moncanevas.h"
#include <QPainter>

QPointF MonCanevas::changeCoo(QPointF p)
{
    return QPointF(m_largeur/2+p.x()*m_uniteX, m_hauteur/2-p.y()*m_uniteY);
}

MonCanevas::MonCanevas(QWidget *parent)
    : QWidget{parent}
{
    setFixedSize(m_largeur+1, m_hauteur+1);
}

void MonCanevas::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    // calcule le nombre d'unités affichables sur la feuille
    int nbxMax = m_largeur / (2 * m_uniteX);
    int nbYMax = m_hauteur / (2 * m_uniteY);
    // trait gris pour les graduations
    painter.setPen(QPen(Qt::gray, 1));
    for(int l=-nbYMax; l<=nbYMax; l++)
        painter.drawLine(changeCoo(QPointF(-nbxMax, l)), changeCoo(QPointF(nbxMax, l)));
    for(int c=-nbxMax; c<=nbxMax; c++)
        painter.drawLine(changeCoo(QPointF(c, -nbYMax)), changeCoo(QPointF(c, nbYMax)));
    // trait bleu foncé épaisseur 5
    painter.setPen(QPen(Qt::blue, 3));
    // tracer l'abscisse : entre [-nbxMax, 0] et [nbxMax, 0]
    painter.drawLine(changeCoo(QPointF(-nbxMax, 0)), changeCoo(QPointF(nbxMax, 0)));
    painter.drawLine(changeCoo(QPointF(0, -nbYMax)), changeCoo(QPointF(0, nbYMax)));
}

void MonCanevas::changeUniteX(int ux)
{
    m_uniteX = ux;
    repaint();
}

void MonCanevas::changeUniteY(int uy)
{
    m_uniteY = uy;
    repaint();
}
