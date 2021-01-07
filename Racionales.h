#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>
#include <numeric>
   using namespace::std;

    class Racional
    {

    public:

    Racional( float = 0.0, float = 1.0);
    void Recibir();
    float Dividendo();
    float Divisor();
    void Suma(float, float, float, float);
    void Resta(float, float, float, float);
    void Multiplicacion(float, float, float, float);
    void Division(float, float, float, float);
    void Comparacion(float, float, float, float);
 
    private:
    float Di;
    float di;
    };
#endif //RACIONAL_H
