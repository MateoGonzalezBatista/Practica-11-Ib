#include "Racionales.h"

Racional::Racional( float a, float b)
   {
   Di = a;
   di = a;
   }


   void Racional::Recibir()
   {
   cout << "\nIntroduzca el dividendo del numero: " << endl;
   cin >> Di;
   cout << "\nIntroduzca el divisor del numero(importante que los divisores sean iguales): " << endl;
   cin >> di;
   cout << "\nEl numero racional indicado es: " << Di << "/" << di << endl;
   }


  float Racional::Dividendo()
  {
   return Di;
  }

  float Racional::Divisor()

  {
   return di;
  }

void Racional::Suma( float a, float b, float c, float d)

   {
  cout <<"\n" << a << "/" << b << " + " << c << "/" << d << " es: " <<  a + c << "/" << b << endl;
           }

  void Racional::Resta( float a, float b, float c, float d)

 {
  cout <<"\n" << a << "/" << b << " - " << c << "/" << d << " es: " <<  a - c << "/" << b << endl;
           }

void Racional::Multiplicacion(float a, float b, float c, float d)

{
cout <<"\n" << a << "/" << b << " * " << c << "/" << d << " es: " <<  a*c << "/" << b*d << endl;
}

void Racional::Division(float a, float b, float c, float d)

{
cout <<"\n" << a << "/" << b << " / " << c << "/" << d << " es: " <<  a*d << "/" << b*c << endl;
}

void Racional::Comparacion( float a, float b, float c, float d)

{
        if(a/b > c/d){
cout <<"\n" << a << "/" << b << " es mayor que " << c << "/" << d << endl;
}
        else{
cout <<"\n" << a << "/" << b << " es menor que " << c << "/" << d << endl;
}
}
