#pragma once
#include <iostream>


class Transaccion {
    protected:
        int nro_transaccion, dia, mes, anioT;
        float cantidad;
        char tipoT;
    public:
        Transaccion();
        Transaccion(int nT, int _dia, int _mes, int _anioT, float _cantidad, char _tipoT); 
        void Extraccion();
        void Deposito(); 
        void Mostrar();
};



