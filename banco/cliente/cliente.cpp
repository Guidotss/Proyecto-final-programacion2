#include "cliente.h"


Cliente::Cliente(){
    this->nro_cliente = 0;
    this->anioC = 0;
    this->nombre = "";
    this->apellido = "";
    this->tipoC = "";
    this->estado = "";
}

Cliente::Cliente(int nC, int _anioC, string _nombre, string _apellido, string _tipoC, string _estado, int n, int _dia, int _mes, int _anioT, float _cantidad, char _tipoT){
    this->nro_cliente = nC;
    this->anioC = _anioC;
    this->nombre = _nombre;
    this->apellido = _apellido;
    this->tipoC = _tipoC;
    this->estado = _estado;
}


vector<Cliente> Cliente::AgregarCliente(int nro_cliente ,Cliente *nuevo_cliente) {
    
    ofstream archivoClientes("clientes.txt", ios::app); 
    if(!archivoClientes){ 
        cerr<<"Error al abrir archivo"<<endl;
        return this->clientesVector; 
    } 
    archivoClientes<<"----------cliente "<<nuevo_cliente->nro_cliente++<<"------------"<<endl;
    archivoClientes<<"nombre "<<nuevo_cliente->nombre<<endl;
    archivoClientes<<"apellido "<<nuevo_cliente->apellido<<endl;
    archivoClientes<<"tipo "<<nuevo_cliente->tipoC<<endl;
    archivoClientes<<"estado "<<nuevo_cliente->estado<<endl;

    this->clientesVector.push_back(*nuevo_cliente);
    archivoClientes.close();

    return this->clientesVector;
}

vector<Cliente> Cliente::EliminarCliente(int nro_cliente) {
    for (auto i = clientesVector.begin(); i != clientesVector.end(); i++) {
        if (i->nro_cliente == nro_cliente) {
            clientesVector.erase(i);
            break;
        }
    }
    
    ofstream archivoClientes("clientes.txt", ios::trunc); 

    if(!archivoClientes){
        cerr<<"Error al abrir archivo"<<endl;
    }

    
    for(auto &it : this->clientesVector){ 
        archivoClientes<<"----------cliente "<<it.nro_cliente++<<"------------"<<endl;
        archivoClientes<<"----------nombre "<<it.nombre<<"-------------"<<endl;
        archivoClientes<<"----------apellido "<<it.apellido<<"-------------"<<endl;
        archivoClientes<<"----------tipo "<<it.tipoC<<"-------------"<<endl;
        archivoClientes<<"----------estado "<<it.estado<<"-------------"<<endl;
    }

    return clientesVector;
}
