#include "moteursudoku.h"

MoteurSudoku::MoteurSudoku()
{
    // initialiser les valeurs à 0
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            valeurs[i][j] = 0;
        }
    }
}

void MoteurSudoku::setValeur(int l, int c, int v)
{
    valeurs[l][c] = v;
}

int MoteurSudoku::getValeur(int l, int c)
{
    return valeurs[l][c];
}
