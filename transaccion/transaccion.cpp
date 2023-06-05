#include <iostream>
#include <fstream>
#include <vector>
#include "transaccion.h"
#include "../cliente/cliente.h"

using namespace std;

int Transaccion::contadorTransacciones = 0;
vector<Transaccion> Transaccion::transaccionVector;

Transaccion::Transaccion(int _diaT, int _mesT, int _anioT, float _cantidad, char _tipoT, int _nroCliente)
{
    contadorTransacciones++;
    this->nro_transaccion = contadorTransacciones;
    this->nroCliente = _nroCliente;
    this->diaT = _diaT;
    this->mesT = _mesT;
    this->anioT = _anioT;
    this->cantidad = _cantidad;
    this->tipoT = _tipoT;
};

Transaccion::Transaccion()
{
    contadorTransacciones++;
    this->nro_transaccion = contadorTransacciones;
    this -> nroCliente = 0;
    this->diaT = 0;
    this->mesT = 0;
    this->anioT = 0;
    this->cantidad = 0;
    this->tipoT = ' ';
};

void Transaccion::Mostrar(int periodo)
{
    cout << "-------------------------------------" << endl;
    cout << "Nro: " << this->nro_transaccion << endl;
    cout << "Fecha: " << this->diaT << "/" << this->mesT << "/" << this->anioT << endl;
    cout << "Cantidad: " << this->cantidad << endl;
    cout << "Tipo: " << this->tipoT << endl;
    cout << "--------------------------------------" << endl;
};

vector<Transaccion> Transaccion::crearTransaccion(Cliente *cliente, Transaccion *nueva_transaccion)
{
    ofstream archivoTransaccion("transacciones.txt", ios::app);
    if (!archivoTransaccion)
    {
        cerr << "Error al abrir archivo" << endl;
        return transaccionVector;
    }

     if (nueva_transaccion->Get_tipoT() == 'D')
    {
        cliente->Set_saldo(cliente->Get_saldo() + nueva_transaccion->Get_cantidad());
    }
    else if ((nueva_transaccion->Get_tipoT() == 'E') && (nueva_transaccion->Get_cantidad() <= cliente->Get_saldo()))
    {
        cliente->Set_saldo(cliente->Get_saldo() - nueva_transaccion->Get_cantidad());
    }
    else
    {
        cout << "No se puede realizar la transaccion" << endl;
        return transaccionVector;
    }
    archivoTransaccion << "------------" << nueva_transaccion->Get_nro_cliente() << "------------" << endl;
    archivoTransaccion << "Nro transaccion " << nueva_transaccion->Get_nro_transaccion() << endl;
    archivoTransaccion << "Cantidad: " << nueva_transaccion->Get_cantidad() << endl;
    archivoTransaccion << "Tipo: " << nueva_transaccion->Get_tipoT() << endl;
    archivoTransaccion << "Dia: " << nueva_transaccion->Get_diaT() << endl;
    archivoTransaccion << "Mes: " << nueva_transaccion->Get_mesT() << endl;
    archivoTransaccion << "Anio: " << nueva_transaccion->Get_anioT() << endl;
    cout << endl
         << endl;

    transaccionVector.push_back(*nueva_transaccion);
    archivoTransaccion.close();

    return transaccionVector;
}

vector<Transaccion> Transaccion::transaccionPorCliente(int clienteBuscado)
{
    vector<Transaccion> transaccionesCliente;

    for (auto &transaccion : this->transaccionVector)
    {
        if(transaccion.Get_nro_cliente() == clienteBuscado)
        {
            transaccionesCliente.push_back(transaccion);
        }
    }

    return transaccionesCliente;
}


vector<Transaccion> Transaccion::MostrarPorPeriodo(int mes, int anio){ 
    vector<Transaccion> transaccionPeriodo;
    mesFinal = mes;
    mesInicial = mes-6
    anioFinal = anio;
    anioInicial = 


    return transaccionPeriodo;
}

vector<Transaccion> Transaccion::MostrarPorAnio(int anio){
    vector<Transaccion> transaccionAnio;
}

vector<Transaccion> Transaccion::MostrarTotal(){
    return transaccionVector;
}

int Transaccion::Get_nro_transaccion()
{
    return nro_transaccion;
}
float Transaccion::Get_cantidad()
{
    return cantidad;
}
char Transaccion::Get_tipoT()
{
    return tipoT;
}
int Transaccion::Get_diaT()
{
    return diaT;
}
int Transaccion::Get_mesT()
{
    return mesT;
}
int Transaccion::Get_anioT()
{
    return anioT;
}
int Transaccion::Get_nro_cliente() 
{
    return this->nroCliente;
}

void Transaccion::Set_nroCliente(int _nroCliente)
{
    this->nroCliente = _nroCliente;
}