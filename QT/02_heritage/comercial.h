#ifndef COMERCIAL_H
#define COMERCIAL_H

#include "humain.h"

class Comercial : public Humain
{
private:
    float m_ca;
    float m_pourcent;
public:
    Comercial(QString pre, QString nom, Sexe sex, float ca, float pou);
    float salaire();
    QString toString();
};

#endif // COMERCIAL_H
