
#include <iostream>
#include <vector>
#include"./cliente/cliente.h"
#include"./transaccion/transaccion.h"


using namespace std;

class Banco: public Cliente, public Transaccion {

    protected: 
        vector<Cliente> clientesVector;
        vector<Transaccion> transacciones;

    public: 
        Banco() = default; 
        Banco(Cliente& clientes): Cliente(){
            this->clientesVector.push_back(clientes);
        } 
        void Mostrar();
        void Deposito();
        void Extraccion();
        ~Banco() = default;
        vector<Cliente> AgregarCliente(int nro_cliente ,Cliente* nuevo_cliente);
        vector<Cliente> EliminarCliente(int nro_cliente);
        vector<Cliente> BuscarClientePorId(int nro_cliente);
        void Get_Clientes();
}; 