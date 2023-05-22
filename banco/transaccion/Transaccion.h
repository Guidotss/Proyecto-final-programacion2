#pragma once
#include <iostream>
#include"../banco.h"

using namespace std;

class Transaccion: public Banco
{
    protected:
        int nro_transaccion, dia, mes, anioT;
        float cantidad;
        char tipoT;
    public:
        Transaccion(); 
        Transaccion(int nT, int _dia, int _mes, int _anioT, float _cantidad, char _tipoT);
        void Mostrar() override;
        void Extraccion() override;
        void Deposito() override; 
};



