#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<vector>
#include "../transaccion/transaccion.h"

using namespace std;

class Cliente {   
    protected:    
        int nro_cliente, anioC;
        string nombre, apellido, tipoC, estado;
        
        vector<Transaccion>transaccion;
        vector<Cliente>clientesVector;
    public:
        Cliente();
        Cliente(int _anioC, string _nombre, string _apellido, string _tipoC);
        
        string Get_nombre(); 
        string Get_apellido();
        string Get_tipoC();
        string Get_estado();
        string cambiarEstado();
        int Get_anioC();
        void Set_nro_cliente(int);
        int Get_nro_cliente();
        void Get_Clientes(); 
        vector<Cliente> AgregarCliente(Cliente *nuevo_cliente);
        vector<Cliente> BuscarClientePorId(int nro_cliente);
        vector<Cliente> EliminarCliente(int nro_cliente); 
        bool comprobarTipo(int anioC, string tipoC);
        int limiteTarjeta(string tipoC);
};
