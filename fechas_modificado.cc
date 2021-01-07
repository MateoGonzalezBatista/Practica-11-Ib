#include <iostream>
#include <string>
#include "Fechas_modificado.h"
using namespace std;


int main(){
string dia_semana;
int dia = 0,ano = 0,mes = 0;
float hora = 0.0;
Fecha hoy(dia_semana,mes,dia,ano,hora);

hoy.Recibir();
hoy.VerificarDiaMes();
hoy.MostrarFecha();
hoy.TipoDeAno();
                return 0;
}
