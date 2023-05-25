#pragma once
#include <iostream>
#include <vector>
#include "./cliente/cliente.h"

using namespace std;

class Banco {

    protected: 
        Cliente* cliente;
        vector<Cliente> clientes;

    public: 
        Banco() = default; 
        Banco(Cliente& clientes){
            this->clientes.push_back(clientes);
        } 
        virtual vector<Cliente> AgregarCliente(int nro_cliente, Cliente *clienteMap);
        virtual void Mostrar();
        virtual void Deposito();
        virtual void Extraccion();
        virtual ~Banco() = default;
        
}; 