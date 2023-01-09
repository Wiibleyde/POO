#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <QString>
#include <QList>


class Etudiant
{
private:
    QString m_prenom;
    QString m_nom;
    bool m_sexe;
    int m_anneeNaissance;
    QList<float> m_notes;
public:
    Etudiant(QString pre, QString nom, bool sex, int ann);
    const QString &nom() const;
    void ajouteNote(float note);
    float moyenne();
    QString toString();
};

#endif // ETUDIANT_H
