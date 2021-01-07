#include <iostream>
#include "Complejos.h"
   using namespace::std; 
  int main()
  
  {          
  Complejo s;
  Complejo x;
  Complejo y;

  x.Recibir();
  y.Recibir();
  s.Suma(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());  
  s.Resta(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());
  s.Producto(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());
  s.Division(x.Real(), x.Imaginario(), y.Real(), y.Imaginario());
   
  return 0; 
  }          
