#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<vector>
#include"../transaccion/transaccion.h"

using namespace std;

class Cliente{   
    private:    
        int nro_cliente, anioC;
        string nombre, apellido, tipoC, estado;
        
        vector<Transaccion>transaccion;
        vector<Cliente>clientesVector;
    public:
        Cliente();
        Cliente(int nC, int _anioC, string _nombre, string _apellido, string _tipoC, string _estado, int n, int _dia, int _mes, int _anioT, float _cantidad, char _tipoT);
        vector<Cliente> AgregarCliente(int nro_cliente,Cliente *nuevo_cliente);
        vector<Cliente> EliminarCliente(int nro_cliente);
       /*  void Deposito() override;
        void Mostrar() override; */
};
