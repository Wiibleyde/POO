#include "moncanvas.h"
#include <QPainter>

MonCanvas::MonCanvas(QWidget *parent)
    : QWidget{parent}
{
    setFixedSize(1300, 700);
}

void MonCanvas::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    // Créer un crayon noir de 5 points
    painter.setPen(QPen{Qt::black, static_cast<qreal>(m_epaisseur)});
    // Créer une brosse verte
    painter.setBrush(QBrush{Qt::green});
    // Dessiner un cercle 
    painter.drawEllipse(m_x, m_y, m_rayon, m_rayon);
}

void MonCanvas::changeX(int x)
{
    m_x = x;
    repaint();
}

void MonCanvas::changeY(int y)
{
    m_y = y;
    repaint();
}

void MonCanvas::changeRayon(int rayon)
{
    m_rayon = rayon;
    repaint();
}

void MonCanvas::changeEpaisseur(int epaisseur)
{
    m_epaisseur = epaisseur;
    repaint();
}

void MonCanvas::changeFondRouge()
{
    m_couleur = Qt::red;
    repaint();
}

void MonCanvas::changeFondVert()
{
    m_couleur = Qt::green;
    repaint();
}

void MonCanvas::changeFondBleu()
{
    m_couleur = Qt::blue;
    repaint();
}

