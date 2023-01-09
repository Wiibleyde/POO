#ifndef ACTEUR_H
#define ACTEUR_H

#include <QString>
#include <QList>

#include "role.h"

class Acteur
{
private:
    QString prenom;
    QString nom;
    QList<Role *> joue;
public:
    Acteur(QString pre, QString nom);
    const QString &getPrenom() const;
    const QString &getNom() const;
};

#endif // ACTEUR_H
