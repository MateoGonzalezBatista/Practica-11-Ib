#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
   using namespace::std;
   // Se define la clase Complejo

    class Complejo
    {
    public:

    Complejo( float = 0, float = 0);  // Constructor
    void Recibir();
    float Real();
    float Imaginario();
    void Suma(float, float, float, float);
    void Resta(float, float, float, float);
    void Producto(float, float, float, float);
    void Division(float, float, float, float);

    private:
    float R;
    float I;
    };
#endif //COMPLEJO_H
