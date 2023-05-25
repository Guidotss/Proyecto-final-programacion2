#include "banco/cliente/cliente.h"
#include "banco/transaccion/transaccion.h"


int main(){


    Cliente cliente2(2, 2020, "Pedro", "Gomez", "Gold", "Activo", 2, 2, 2, 2020, 2000, 'D');
    cliente2.AgregarCliente(2, &cliente2);


    return 0;
}