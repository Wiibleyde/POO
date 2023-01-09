#ifndef HUMAIN_H
#define HUMAIN_H

#include <QString>


class Humain
{
public:
    enum Sexe {Feminin,Masculin};
private:
    QString m_prenom;
    QString m_nom;
    Sexe m_sexe;
public:
    Humain(QString pre, QString nom, Sexe sex);
    const QString &getNom() const;
    QString toString();
};

#endif // HUMAIN_H
