#include "figura.h"
#include <iostream>
using namespace std;
Figura::Figura()
{
    this->b = 0;
    this->h = 0;
    this->a = 0;
}
Figura::Figura(int b, int h)
{
    this->b = b;
    this->h = h;
};

void Figura::setArea(float a)
{
    this->a = a;
}

float Figura::getArea()
{
    return this->a;
}
