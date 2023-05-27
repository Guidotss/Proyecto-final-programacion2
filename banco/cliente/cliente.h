#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<vector>
#include"../transaccion/transaccion.h"

using namespace std;

class Cliente {   
    protected:    
        int nro_cliente, anioC;
        string nombre, apellido, tipoC, estado;
        
        vector<Transaccion>transaccion;
        vector<Cliente>clientesVector;
    public:
        Cliente();
        Cliente(int nC, int _anioC, string _nombre, string _apellido, string _tipoC);
        
        string Get_nombre(); 
        string Get_apellido();
        string Get_tipoC();
        string Get_estado();
        int Get_anioC();
        int Get_nro_cliente();
        string cambiarEstado();



       /*  void Deposito() override;
        void Mostrar() override; */
};
