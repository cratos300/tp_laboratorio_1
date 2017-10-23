#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 5

int main()
{

    char seguir='s';
    int opcion=0;
    EMovie Puntero[TAM];
    inicializarEstructura(Puntero,TAM);

    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Modificar pelicula\n");
        printf("4- Generar pagina web\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                AltaPelicula(Puntero,TAM);
                break;
            case 2:borrarPeliculass(Puntero,TAM);
                break;
            case 3:
                    modificarTitulo(Puntero,TAM);
               break;
            case 4:


            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
