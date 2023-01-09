#include "qstd.h"
#include "etudiant.h"
#include "promotion.h"
using namespace qstd;

int main()
{
    Etudiant e1("Nathan","Bonnell",false,2004);
    Etudiant e2("Jean","Dupont",false,2003);
    Etudiant e3("Pierre","Durand",false,2002);
    Etudiant e4("Marie","Dupont",true,2003);
    try {
        cout << "Moyenne de " << e1.nom() << " : " << e1.moyenne() << "\n";
    } catch (QString exc) {
        cerr << e1.nom() << " : " << exc << ".\n";
    }
    cout << e1.toString() << "\n";
    Promotion p1("B1B",2022);
    p1.ajouteEtudiant(&e1);
    p1.ajouteEtudiant(&e2);
    p1.ajouteEtudiant(&e3);
    p1.ajouteEtudiant(&e4);
    e1.ajouteNote(19);
    e1.ajouteNote(20);
    e1.ajouteNote(15);
    e2.ajouteNote(12);
    e2.ajouteNote(14);
    e2.ajouteNote(13);
    e3.ajouteNote(10);
    e3.ajouteNote(11);
    e3.ajouteNote(12);
    cout << p1.toString() << "\n";
    return 0;
}
