#ifndef MONCANVAS_H
#define MONCANVAS_H

#include <QWidget>

class MonCanvas : public QWidget
{
    Q_OBJECT
private:
    int m_x = 100, m_y = 100;
    int m_rayon = 50;
    int m_epaisseur = 5;
    QColor m_couleur = Qt::green;
public:
    explicit MonCanvas(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
public slots:
    void changeX(int x);
    void changeY(int y);
    void changeRayon(int rayon);
    void changeEpaisseur(int epaisseur);
    void changeFondRouge();
    void changeFondVert();
    void changeFondBleu();
};

#endif // MONCANVAS_H
