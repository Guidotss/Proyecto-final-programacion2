#include <iostream>
#include <fstream>
#include "./banco.h"



vector<Cliente> Banco::AgregarCliente(int nro_cliente ,Cliente *nuevo_cliente) {
    ofstream archivoClientes("clientes.txt", ios::app); 
    if(!archivoClientes){ 
        cerr<<"Error al abrir archivo"<<endl;
        return this->clientesVector; 
    } 
    archivoClientes<<"----------cliente "<<nuevo_cliente->Get_nro_cliente()<<"------------"<<endl;
    archivoClientes<<"nombre: "<<nuevo_cliente->Get_nombre()<<endl;
    archivoClientes<<"apellido: "<<nuevo_cliente->Get_apellido()<<endl;
    archivoClientes<<"tipo: "<<nuevo_cliente->Get_anioC()<<endl;
    archivoClientes<<"estado: "<<nuevo_cliente->Get_estado()<<endl;
    cout<<endl<<endl;

    this->clientesVector.push_back(*nuevo_cliente);
    archivoClientes.close();

    return clientesVector;
}

vector<Cliente> Banco::BuscarClientePorId(int nro_cliente){ 
    vector<Cliente>cliente;

    for(auto &it : this->clientesVector){ 
        if(it.Get_nro_cliente() == nro_cliente){ 
            cliente.push_back(it);
        }
    }

    return cliente;
    
}

vector<Cliente> Banco::EliminarCliente(int nro_cliente) {
    vector<Cliente>cliente = BuscarClientePorId(nro_cliente);
    if(cliente.size() == 0){
        cout<<"No se encontro el cliente"<<endl;
        return this->clientesVector; 
    }

    ofstream archivoClientes("clientes.txt"); 

    if(!archivoClientes){
        cerr<<"Error al abrir archivo"<<endl;
    }
    
    for(auto &it : this->clientesVector){ 
        archivoClientes<<"----------cliente "<<it.Get_nro_cliente()<<"------------"<<endl;
        archivoClientes<<"nombre "<<it.Get_nombre()<<endl;
        archivoClientes<<"apellido "<<it.Get_apellido()<<endl;
        archivoClientes<<"tipo "<<it.Get_tipoC()<<endl;
        archivoClientes<<"estado "<<it.Get_estado()<<endl;
        cout<<endl<<endl;
    }

    return clientesVector;
}

void Banco::Get_Clientes(){

    ifstream archivoClientes("clientes.txt");
    if(!archivoClientes){
        cerr<<"Error al abrir archivo"<<endl;
    }


    archivoClientes.seekg(0, ios::end);
    if(archivoClientes.tellg() == 0){
        cout<<"No hay clientes registrados"<<endl;
        return;
    }else{ 
        archivoClientes.seekg(0, ios::beg);
        string linea;
        while(getline(archivoClientes, linea)){
            cout<<linea<<endl;
        }
        archivoClientes.close();
    }

}