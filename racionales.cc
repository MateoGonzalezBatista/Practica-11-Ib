#include <iostream>
#include <numeric>
#include "Racionales.h"
   using namespace::std; 

int main()
  
  {           
  Racional x;
  Racional y;
  Racional s;

  x.Recibir();
  y.Recibir();
  s.Suma(x.Dividendo(), x.Divisor(), y.Dividendo(), y.Divisor());  
  s.Resta(x.Dividendo(), x.Divisor(), y.Dividendo(), y.Divisor());
  s.Multiplicacion(x.Dividendo(), x.Divisor(), y.Dividendo(), y.Divisor());
  s.Division(x.Dividendo(), x.Divisor(), y.Dividendo(), y.Divisor());
  s.Comparacion(x.Dividendo(), x.Divisor(), y.Dividendo(), y.Divisor());
  return 0; 
  }           
