#include "cliente.h"


Cliente::Cliente(){
    this->nro_cliente = 0;
    this->anioC = 0;
    this->nombre = "";
    this->apellido = "";
    this->tipoC = "";
    this->estado = "";
}

Cliente::Cliente(int nC, int _anioC, string _nombre, string _apellido, string _tipoC){
    this->nro_cliente = nC;
    this->anioC = _anioC;
    this->nombre = _nombre;
    this->apellido = _apellido;
    this->tipoC = _tipoC;
    this->estado = "activo";
}

string Cliente::Get_nombre(){
    return this->nombre;
}

string Cliente::Get_apellido(){
    return this->apellido;
}

string Cliente::Get_tipoC(){
    return this->tipoC;
}

string Cliente::Get_estado(){
    return this->estado;
}

int Cliente::Get_anioC(){
    return this->anioC;
}

int Cliente::Get_nro_cliente(){
    return this->nro_cliente;
}

string Cliente::cambiarEstado() {
    this->estado == "activo" ? this->estado = "inactivo" : "activo";
    return this->estado;
}
