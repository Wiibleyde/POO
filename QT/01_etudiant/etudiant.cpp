#include "etudiant.h"
#include <QDebug>

const QString &Etudiant::nom() const
{
    return m_nom;
}

void Etudiant::ajouteNote(float note)
{
    m_notes.append(note);
    qDebug() <<"Taille "<<m_notes.size();
}

QString Etudiant::toString()
{
    QString resultat;
    QTextStream buffer(&resultat);
    QString titre = m_sexe == true ? "Mme " : "M. ";
    buffer << titre << m_prenom << " " << m_nom << " (" << m_anneeNaissance << ") Moyenne : ";
    try {
        buffer << moyenne();
    } catch (QString exc) {
        buffer << exc;
    }
    return resultat;
}

float Etudiant::moyenne()
{
    if (m_notes.size() == 0)
        throw QString("Pas de notes");
    float somme = 0;
    for (int i = 0; i < m_notes.size(); i++)
        somme += m_notes[i];
    return somme / m_notes.size();
}

Etudiant::Etudiant(QString pre, QString nom, bool sex, int ann):
    m_prenom(pre), m_nom(nom), m_sexe(sex), m_anneeNaissance(ann)
{
    qDebug() << "Etudiant "<<nom<<" instancié";
}
