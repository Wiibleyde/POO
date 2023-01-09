#ifndef FILM_H
#define FILM_H

#include <QString>

class Film
{
private:
    QString titre;
    int annee;
public:
    Film(QString tit, int ann);
    const QString &getTitre() const;
    int getAnnee() const;
};

#endif // FILM_H
