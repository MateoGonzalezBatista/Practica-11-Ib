#include <iostream>
#include <string>
#include "Fechas.h"
using namespace std;


int main(){
string dia_semana,mes;
int dia = 0,ano = 0;
float hora = 0.0;
Fecha hoy(dia_semana,mes,dia,ano,hora);

hoy.Recibir();
hoy.MostrarFecha();
hoy.TipoDeAno();
                return 0;
}
