#pragma once
#include <iostream>
using namespace std;

class Transaccion {

    protected:
        int nro_transaccion, diaT, mesT, anioT;
        float cantidad;
        char tipoT;
        vector<Transaccion> transaccionVector;
    public:
        Transaccion();
        Transaccion(int _dia, int _mes, int _anioT, float _cantidad, char _tipoT); 
        void Extraccion();
        void Deposito(); 
        void Mostrar(int periodo);
        float Get_cantidad();
        int Get_diaT();
        int Get_mesT();
        int Get_anioT();
        int Get_nro_transaccion();
        char Get_tipoT();


        vector<Transaccion> crearTransaccion(int nro_cliente ,Transaccion *nueva_transaccion);

};



