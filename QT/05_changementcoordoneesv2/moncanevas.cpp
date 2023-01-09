#include "moncanevas.h"
#include <QPainter>

QPointF MonCanevas::changeCoo(QPointF p)
{
    return QPointF(m_largeur/2+p.x()*m_uniteX, m_hauteur/2-p.y()*m_uniteY);
}

float MonCanevas::f(float x)
{
    return 5 * sin(x) + sin(25+x);
}

MonCanevas::MonCanevas(QWidget *parent) : QWidget(parent)
{
    setFixedSize(m_largeur, m_hauteur);
}

void MonCanevas::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    int nbxMax = m_largeur / (2*m_uniteX) + 1;
    int nbyMax = m_hauteur / (2*m_uniteY) + 1;
    painter.setPen(QPen(Qt::gray, 1));
    for (int c = -nbxMax; c <= nbxMax; c++)
        painter.drawLine(changeCoo(QPointF(c, -nbyMax)), changeCoo(QPointF(c, nbyMax)));
    for (int c = -nbyMax; c <= nbyMax; c++)
        painter.drawLine(changeCoo(QPointF(-nbxMax, c)), changeCoo(QPointF(nbxMax, c)));
    painter.setPen(QPen(Qt::blue, 2));
    painter.drawLine(changeCoo(QPointF(-nbxMax, 0)), changeCoo(QPointF(nbxMax, 0)));
    painter.drawLine(changeCoo(QPointF(0, -nbyMax)), changeCoo(QPointF(0, nbyMax)));
    QPolygonF points;
    for (double x = -nbxMax; x <= nbxMax; x += 0.001)
        points << QPointF(10,4);
        painter.drawPolyline(points);
}

void MonCanevas::changeUniteX(int ux)
{
    m_uniteX = ux;
    repaint();
}

void MonCanevas::changeUniteX(int uy)
{
    m_uniteY = uy;
    repaint();
}
