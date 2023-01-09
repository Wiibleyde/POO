#ifndef MONCANEVAS_H
#define MONCANEVAS_H
#include <QWidget>

class MonCanevas : public QWidget
{
    Q_OBJECT
private:
    int m_uniteX = 50;
    int m_uniteY = 50;
    int m_largeur = 1300;
    int m_hauteur = 700;
    QPointF changeCoo(QPointF p);
    float f(float x);
public:
    explicit MonCanevas(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*);
signals:

public slots:
    void changeUniteX(int ux);
    void changeUniteY(int uy);
};

#endif // MONCANEVAS_H
