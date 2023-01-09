#include "comercial.h"
#include <QDebug>

Comercial::Comercial(QString pre, QString nom, Sexe sex, float ca, float pou):
    Humain(pre,nom,sex), m_ca(ca), m_pourcent(pou)
{
    qDebug() << "Comercial" << pre << "créé";
}

float Comercial::salaire()
{
    return m_pourcent * m_ca;
}

QString Comercial::toString()
{
    QString res;
    QTextStream buf(&res);
    buf << Humain::toString() << " gagne " << salaire() << "€";
    return res;
}
