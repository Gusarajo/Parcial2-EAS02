#ifndef figura_h
#define figura_h
using namespace std;
class Figura
{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};
#endif