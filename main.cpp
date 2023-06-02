#include "cliente/cliente.h"
#include "transaccion/transaccion.h"




int main(){
    Cliente cliente1(2000, "Juan", "Perez", "black");    
    Cliente cliente2(2000, "Juan", "Perez", "oro");

    cliente1.AgregarCliente(&cliente1);
    cliente2.AgregarCliente(&cliente2);
    const int nro1 = cliente1.Get_nro_cliente();
    const int nro2 = cliente2.Get_nro_cliente();

    cout<<nro1<<endl;
    cout<<nro2<<endl;
    
    

    

    return 0;
}