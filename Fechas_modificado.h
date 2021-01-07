#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>
using namespace std;

class Fecha{        private:                string dia_semana_;                int dia_;                int  mes_;                int ano_; //Esto es la palabra con la ene con curvita, pero el programa no acepta letras no inglesas, asi que no sean malpensados
                float hora_;

        public:
                Fecha(string dia_semana, int  mes, int dia = 0,  int ano = 0, float hora = 0.0);
                //El constructor
                void Recibir();
                string Semana();
                int Dia();
                int Mes();
                int Ano();
                float Hora();
                void VerificarDiaMes();
                void MostrarFecha();
                void TipoDeAno();
        };

#endif //FECHA_H
