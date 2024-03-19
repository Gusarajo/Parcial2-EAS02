#ifndef Figuras_h
#define Figuras_h
#include "figura.h"
using namespace std;

class Cuadrado : public Figura
{
    Cuadrado(int l) : Figura(l, l)
    {
        this->setArea(l * l);
    }
};
class Triangulo : public Figura
{
    Triangulo(int b, int h) : Figura(b, h)
    {
        this->setArea((b * h) / 2);
    }
};
class Rectangulo : public Figura
{
    Rectangulo(int b, int h) : Figura(b, h)
    {
        this->setArea(b * h);
    }
};
#endif