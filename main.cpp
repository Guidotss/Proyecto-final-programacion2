#include "cliente/cliente.h"
#include "transaccion/transaccion.h"
#include <iostream>

using namespace std; 



int main(){
    Cliente cliente1(2000, "Juan", "Perez", "black",0);    
    Cliente cliente2(2000, "Juan", "Perez", "oro",0);

    cliente1.AgregarCliente(&cliente1);
    cliente2.AgregarCliente(&cliente2);
    


    Transaccion transaccion1(1, 1, 2021, 100, 'D', cliente1.Get_nro_cliente());
    Transaccion transaccion2(1, 1, 2021, 100, 'D', cliente2.Get_nro_cliente());

    transaccion1.crearTransaccion(&cliente1, &transaccion1);
    transaccion2.crearTransaccion(&cliente2, &transaccion2);


    vector<Transaccion>t = transaccion1.transaccionPorCliente(cliente1.Get_nro_cliente());
    for (int i = 0; i < t.size(); i++)
    {
        cout<<t[i].Get_nro_cliente()<<endl; 
        cout<<t[i].Get_tipoT()<<endl;
        cout<<t[i].Get_cantidad()<<endl;
    }


    transaccion1.MostrarPorPeriodo(); 

    return 0;
}