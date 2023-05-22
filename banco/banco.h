#pragma once
#include<vector>
#include"./cliente/cliente.h"
#include"./transaccion/transaccion.h"

using namespace std;

class Banco {

    protected: 
        vector<Transaccion> transaccion;
        vector<Cliente> clientes;

    public: 
        Banco() = default; 
        Banco(Cliente& clientes, Transaccion& transaccion); 
        virtual vector<Cliente> AgregarCliente(int nro_cliente, Cliente *clienteMap);
        virtual void Mostrar();
        virtual void Deposito();
        virtual void Extraccion();
        virtual ~Banco() = default;
        
}; 