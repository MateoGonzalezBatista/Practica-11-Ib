#include "Fechas_modificado.h"

Fecha::Fecha(string dia_semana, int  mes, int dia ,  int ano , float hora){dia_semana_ = dia_semana; dia_ = dia; mes_ = mes; ano_ = ano; hora_ = hora;}

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

void Fecha::VerificarDiaMes(){
        if(mes_ == 2 && (ano_%4 == 0 || (ano_%100 != 0 && ano_%400 == 0))){
              if(dia_ > 29){
              cout << "numero de dia no valido" << endl;
                return exit;
              }
        }
        if(mes_ == 2 && (ano_%4 != 0 || (ano_%100 = 0 && ano_%400 != 0))){
              if(dia_ > 28){
              cout << "numero de dia no valido" << endl;
                return exit;
              }
        }      
        if(mes_ > 12 || mes_ < 1){
                cout << "mes no valido" << endl;
                return exit;
        }
        if(dia_ > 31){
                cout << "numero de dia no valido"<< endl;
                return exit;
        }
}
void Fecha::MostrarFecha(){
                cout << "Hoy es " << dia_semana_ << " " << dia_ << " del mes " << mes_ << " del ano  " << ano_ << " y son las " << hora_ << endl;
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
                int Fecha::Mes(){
                        return mes_;
                }
                int Fecha::Ano(){
                        return ano_;
                }
                float Fecha::Hora(){
                        return hora_;
                }
