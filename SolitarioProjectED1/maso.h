#ifndef MASO_H
#define MASO_H
#include "carta.h"
#include"button.h"

class Maso:public Button
{
public:
    Maso();
    Carta* cartas[5];

};

#endif // MASO_H
