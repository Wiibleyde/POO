#include "promotion.h"
#include <QDebug>
#include "etudiant.h"

Promotion::Promotion(QString nom, int ann):
    m_nom(nom), m_annee(ann)
{
    qDebug() << "Promotion "<<nom<<" instanciée";
}

void Promotion::ajouteEtudiant(Etudiant *e)
{
    m_etudiants.append(e);
    qDebug() << "Etudiant "<<e->nom()<<" ajouté à la promotion "<<m_nom;
}

float Promotion::moyenne()
{
    if (m_etudiants.size() == 0)
        throw QString("Pas d'étudiants");
    float somme = 0;
    float etudiants = 0;
    foreach (Etudiant *e, m_etudiants) {
        try {
            somme += e->moyenne();
            etudiants++;
        } catch (QString exc) {
            qDebug() << "Etudiant " << e->nom() << " : " << exc << ".\n";
        }

    }
    if (etudiants == 0)
        throw QString("Aucun étudiant n'a de notes.");
    return somme / etudiants;
}

QString Promotion::toString()
{
    QString resultat;
    QTextStream buffer(&resultat);
    buffer << "Promotion " << m_nom << " (" << m_annee << ") Moyenne : \n";
    foreach (Etudiant *e, m_etudiants) {
        buffer << e->toString() << "\n";
    }
    try {
        buffer << "Moyenne de la promotion : " << moyenne();
    } catch (QString exc) {
        buffer << exc;
    }
    return resultat;
}
