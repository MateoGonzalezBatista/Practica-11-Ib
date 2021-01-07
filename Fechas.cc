#include "Fechas.h"

Fecha::Fecha(string dia_semana, string mes, int dia ,  int ano , float hora){dia_semana_ = dia_semana; dia_ = dia; mes_ = mes; ano_ = ano; hora_ = hora;}

void Fecha::Recibir(){
cout << "\nDime el dia de la semana en el que estamos: " << endl;
                        cin >> dia_semana_;
                        cout << "\nDime el dia numerico en el que estamos: " << endl;
                        cin >> dia_;
                        cout << "\nDime el mes en el que estamos: " << endl;
                        cin >> mes_;
                        cout << "\nDime el ano en el que estamos: " << endl;
                        cin >> ano_;
                        cout << "\nDime que hora es (Pon la respuesta en el formato de hora.minutos): " << endl;
                        cin >> hora_;
}

void Fecha::MostrarFecha(){
                cout << "Hoy es " << dia_semana_ << " " << dia_ << " de " << mes_ << " del " << ano_ << " y son las " << hora_ << endl;
                }

void Fecha::TipoDeAno(){
                if(ano_%4 == 0 || (ano_%100 != 0 && ano_%400 == 0)){
                                cout << "Es un ano viciesto" << endl;
                        }
                        else{
                                cout << "Es un ano normal" << endl;
                        }
}

string Fecha::Semana(){
                        return dia_semana_;
                }
                int Fecha::Dia(){
                        return dia_;
                }
                string Fecha::Mes(){
                        return mes_;
                }
                int Fecha::Ano(){
                        return ano_;
                }
                float Fecha::Hora(){
                        return hora_;
                }
