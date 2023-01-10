#ifndef CANEVAS_H
#define CANEVAS_H

#include "moteursudoku.h"
#include <QWidget>


class Canevas : public QWidget
{
    Q_OBJECT
private:
    MoteurSudoku *moteur;
public:
    explicit Canevas(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);
    void setMoteur(MoteurSudoku *newMoteur);
signals:

};

#endif // CANEVAS_H
