#ifndef CARTA_H
#define CARTA_H
# include <iostream>
using namespace std;

class Carta
{
public:
    int tipo,id;
    string carta;
    bool mostrar,disponible,mover;
    string img;
    Carta();
};

#endif // CARTA_H
