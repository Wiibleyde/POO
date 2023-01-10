#ifndef MOTEURSUDOKU_H
#define MOTEURSUDOKU_H


class MoteurSudoku
{
private:
    int valeurs[9][9];

public:
    MoteurSudoku();
    void setValeur(int l, int c, int v);
    int getValeur(int l, int c);
};

#endif // MOTEURSUDOKU_H
