#include "banco/banco.h"
#include "banco/cliente/cliente.h"
#include "banco/transaccion/transaccion.h"


int main(){
    Cliente cliente1(1, 2000, "Juan", "Perez", "normal");
    Banco banco1;
    Cliente cliente2(2, 2000, "Juan", "Perez", "normal");
    banco1.AgregarCliente(1, &cliente1);
    banco1.AgregarCliente(2, &cliente2);
    
    banco1.Get_Clientes(); 

    return 0;
}