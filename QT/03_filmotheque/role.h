#ifndef ROLE_H
#define ROLE_H

//#include "film.h"
//#include "acteur.h"

#include<QString>

class Acteur;
class Film;

class Role
{
private:
    Acteur *m_acteur;
    Film *m_film;
    QString m_nom;
public:
    Role(Acteur *acteur, Film *film, QString nom);
};

#endif // ROLE_H
