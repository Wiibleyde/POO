#include "permanent.h"
#include <QDebug>

Permanent::Permanent(QString pre, QString nom, Sexe sex, float fix):
    Humain(pre,nom,sex), m_fixe(fix)
{
    qDebug() << "Permanent" << pre << "créé";
}

float Permanent::salaire()
{
    return m_fixe;
}

QString Permanent::toString()
{
    QString res;
    QTextStream buf(&res);
    buf << Humain::toString() << " gagne " << salaire() << "€";
    return res;
}

