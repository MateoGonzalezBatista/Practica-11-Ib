#include "Complejos.h"

Complejo::Complejo(float a, float b)
   {
   R = a;
   I = a;
   }

        //Definicion de los metodos
   void Complejo::Recibir()
   {
   cout << "\nIntroduzca la parte real del numero: " << endl;
   cin >> R;
   cout << "\nIntroduzca la parte compleja del numero: " << endl;
   cin >> I;
   cout << "\nSu numero complejo es: (" << R << "," << I << "i)" << endl;
   }

  float Complejo::Real()
  {
   return R;
  }


  float Complejo::Imaginario()

  {
   return I;
  }


  void Complejo::Suma( float a, float b, float c, float d)

   {
  cout <<"\n La suma de los numeros es:  ( "  << a + c
       << " , " << b + d
       <<"i)" << endl;
   }


  void Complejo::Resta( float a, float b, float c, float d)

  {
  cout <<"\n La resta de los numeros es:  ( " << a - c << " , "
       << b - d
       <<"i)" << endl;
  }

void Complejo::Producto( float a, float b, float c, float d)

  {
  cout <<"\n El producto de los numeros es:  ( " << (a*c) + (b*d*(-1)) << " , " << (a*d) + (b*c) << "i)" << endl;
  }

  void Complejo::Division( float a, float b, float c, float d)

  {
  cout <<"\n La division de los numeros es:  ( " << ((a*c) + (b*(-d)))/((c*c) + (d*d)) << " , " << ((a*(-d)) + (b*c))/((c*(-d))) + (d*c) << "i)" << endl;
  }
