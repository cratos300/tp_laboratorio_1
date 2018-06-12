#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 10
int main()
{
    char seguir='s';
    int opcion=0;
    int flag=0;
    int i;
    int indice;
    int indiceDNI;
    int auxDNI;
    int tucu;
    char respuesta;
    EPersona cliente[TAM];
    inicializarEstado(cliente,TAM);
    hardCodearCliente(cliente,TAM);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");


        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            altaUsuario(cliente,TAM);



            break;
        case 2:borrarunCliente(cliente,TAM);
                break;


            break;
        case 3:
            ImprimirListaOrdenadaPorNombre(cliente,TAM);

            break;

        case 4:
            grafico(cliente,TAM);
            break;
        case 5:
            seguir = 'n';
            break;
        case 6:
            break;
        case 7:
            break;
        }
    }

    return 0;
}


