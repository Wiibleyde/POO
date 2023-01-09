#include "qstd.h"
using namespace qstd;

#include "humain.h"
#include "permanent.h"
#include "comercial.h"

int main()
{
    cout<<"Projet Héritage\n";
    Permanent p1("Nathan","Bonnell",Humain::Masculin,2000);
    cout << p1.toString() << endl;
    Comercial c1("Nathan","Prale",Humain::Masculin,10000,0.1);
    cout << c1.toString() << endl;
}
