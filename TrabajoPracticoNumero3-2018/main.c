#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

    char seguir='s';
    int opcion=0;
    EMovie Movie;

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
                AltaPelicula(Movie);
                break;
            case 2:
                borrarPelicula(Movie);
                break;
            case 3:
                modificarTitulo(Movie);
               break;
            case 4:
            break;

            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
