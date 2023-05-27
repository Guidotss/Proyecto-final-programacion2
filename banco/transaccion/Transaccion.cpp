#include <iostream>
#include "transaccion.h"
using namespace std;

Transaccion::Transaccion(int nT, int _dia, int _mes, int _anioT, float _cantidad, char _tipoT){
    this->nro_transaccion = nT;
    this->dia = _dia;
    this->mes = _mes;
    this->anioT = _anioT;
    this->cantidad = _cantidad;
    this->tipoT = _tipoT;
}; 

Transaccion::Transaccion(){ 
    this->nro_transaccion = 0;
    this->dia = 0;
    this->mes = 0;
    this->anioT = 0;
    this->cantidad = 0;
    this->tipoT = ' ';
}; 

void Transaccion::Mostrar() {
    cout<<"-------------------------------------"<<endl; 
    cout<<"Nro: "<<this->nro_transaccion<<endl;
    cout<<"Fecha: "<<this->dia<<"/"<<this->mes<<"/"<<this->anioT<<endl;
    cout<<"Cantidad: "<<this->cantidad<<endl;
    cout<<"Tipo: "<<this->tipoT<<endl;
    cout<<"--------------------------------------"<<endl; 

    
}; 

void Transaccion::Extraccion() {
    cout<<"-------------------------------------"<<endl; 
    cout<<"Nro: "<<this->nro_transaccion<<endl;
    cout<<"Fecha: "<<this->dia<<"/"<<this->mes<<"/"<<this->anioT<<endl;
    cout<<"Cantidad: "<<this->cantidad<<endl;
    cout<<"Tipo: "<<this->tipoT<<endl;
    cout<<"--------------------------------------"<<endl; 
};

void Transaccion::Deposito(){
    cout<<"-------------------------------------"<<endl; 
    cout<<"Nro: "<<this->nro_transaccion<<endl;
    cout<<"Fecha: "<<this->dia<<"/"<<this->mes<<"/"<<this->anioT<<endl;
    cout<<"Cantidad: "<<this->cantidad<<endl;
    cout<<"Tipo: "<<this->tipoT<<endl;
    cout<<"--------------------------------------"<<endl;     
}