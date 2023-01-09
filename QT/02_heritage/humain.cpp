#include "humain.h"
#include <QDebug>
#include <QTextStream>

const QString &Humain::getNom() const
{
    return m_nom;
}

Humain::Humain(QString p, QString n, Sexe s):
    m_prenom(p), m_nom(n), m_sexe(s)
{
    qDebug() << "Humain" << m_prenom << "créé";
}

QString Humain::toString()
{
    QString res;
    QTextStream buf(&res);
    QString titre = m_sexe == Feminin ? "Mme" : "M.";
    buf << titre << " " << m_nom << " " << m_prenom;
    return res;
}
