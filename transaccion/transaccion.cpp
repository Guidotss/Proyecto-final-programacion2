#include <iostream>
#include <fstream>
#include <vector>
#include "transaccion.h"
using namespace std;

Transaccion::Transaccion(int _diaT, int _mesT, int _anioT, float _cantidad, char _tipoT){
    this->nro_transaccion = 0;
    this->diaT = _diaT;
    this->mesT = _mesT;
    this->anioT = _anioT;
    this->cantidad = _cantidad;
    this->tipoT = _tipoT;
}; 

Transaccion::Transaccion(){ 
    this->nro_transaccion = 0;
    this->diaT = 0;
    this->mesT = 0;
    this->anioT = 0;
    this->cantidad = 0;
    this->tipoT = ' ';
}; 

void Transaccion::Mostrar(int periodo) {
    cout<<"-------------------------------------"<<endl; 
    cout<<"Nro: "<<this->nro_transaccion<<endl;
    cout<<"Fecha: "<<this->diaT<<"/"<<this->mesT<<"/"<<this->anioT<<endl;
    cout<<"Cantidad: "<<this->cantidad<<endl;
    cout<<"Tipo: "<<this->tipoT<<endl;
    cout<<"--------------------------------------"<<endl; 

    
};

vector<Transaccion> Transaccion::crearTransaccion(int nro_cliente ,Transaccion *nueva_transaccion) {

    


    ofstream archivoTransaccion("transacciones.txt", ios::app); 
    if(!archivoTransaccion){ 
        cerr<<"Error al abrir archivo"<<endl;
        return this->transaccionVector; 
    } 
    archivoTransaccion<<"----------cliente "<<nro_cliente<<"------------";
    archivoTransaccion<<"Nro transaccion "<<nueva_transaccion->Get_nro_transaccion()<<endl;
    archivoTransaccion<<"Cantidad: "<<nueva_transaccion->Get_cantidad()<<endl;
    archivoTransaccion<<"Tipo: "<<nueva_transaccion->Get_tipoT()<<endl;
    archivoTransaccion<<"Dia: "<<nueva_transaccion->Get_diaT()<<endl;
    archivoTransaccion<<"Mes: "<<nueva_transaccion->Get_mesT()<<endl;
    archivoTransaccion<<"Anio: "<<nueva_transaccion->Get_anioT()<<endl;
    cout<<endl<<endl;

    this->transaccionVector.push_back(*nueva_transaccion);
    archivoTransaccion.close();

    return transaccionVector;
}

int Transaccion::Get_nro_transaccion(){
    return nro_transaccion;
}
float Transaccion::Get_cantidad(){
    return cantidad;
}
char Transaccion::Get_tipoT(){
    return tipoT;
}
int Transaccion::Get_diaT(){
    return diaT;
}
int Transaccion::Get_mesT(){
    return mesT;
}
int Transaccion::Get_anioT(){
    return anioT;
}