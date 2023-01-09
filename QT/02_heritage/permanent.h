#ifndef PERMANENT_H
#define PERMANENT_H

#include "humain.h"

class Permanent : public Humain
{
private:
    float m_fixe;
public:
    Permanent(QString pre, QString nom, Sexe sex, float fix);
    float salaire();
    QString toString();
};

#endif // PERMANENT_H
