#ifndef PROMOTION_H
#define PROMOTION_H

#include <QString>
#include <QList>
#include "etudiant.h"

class Promotion
{
private:
    QString m_nom;
    int m_annee;
    QList<Etudiant *> m_etudiants;
public:
    Promotion(QString nom, int annee);
    void ajouteEtudiant(Etudiant *e);
    float moyenne();
    QString toString();
};

#endif // PROMOTION_H
