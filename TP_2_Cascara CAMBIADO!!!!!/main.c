#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 3
int main()
{
    char seguir='s';
    int opcion=0;
    int flag=0;
    int i;
    int indice;
    int indiceDNI;
    int auxDNI;
    char respuesta;
    int j;
    char auxString[50];
    int auxInt;
    EPersona cliente[TAM];
    for(i=0;i<TAM;i++)
    {
        cliente[i].estado=0;
    }

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

            flag=0;
                    for(i=0;i<TAM;i++)
                    {
                        indice=obtenerEspacioLibre(cliente,TAM);

                        if(indice>=0)
                        {
                            fflush(stdin);
                            printf("Ingrese su nombre:");
                            gets(cliente[indice].nombre);
                            fflush(stdin);
                            printf("Ingrese su edad:");
                            scanf("%d",&cliente[indice].edad);
                            fflush(stdin);
                            printf("Ingrese el dni");
                            scanf("%d",&cliente[indice].dni);
                            fflush(stdin);
                            cliente[indice].estado=1;
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0)
                    {
                        printf("Porfavor borre algun dato");
                    }



            break;
        case 2:
            printf("Ingrese el dni a eliminar:");
            scanf("%d",&auxDNI);

                indiceDNI=buscarPorDni(cliente,auxDNI,TAM);

                if(indiceDNI >=0 && cliente[indiceDNI].estado!=0)
                {
                    printf("%s,%d,%d,",cliente[indiceDNI].nombre,cliente[indiceDNI].edad,cliente[indiceDNI].dni);
                    printf("Estas seguro que deseas eliminarlo s/n");
                    fflush(stdin);
                    scanf("%c",&respuesta);
                    fflush(stdin);
                    if(respuesta =='s')
                    {
                        cliente[indiceDNI].estado=0;
                        printf("Cliente eliminado correctamente...\n");

                    }
                    else
                    {
                        printf("Accion cancelada");
                    }

                }
                else
                    printf("Ese dato no existe");
                break;


            break;
        case 3:
            printf("NOMBRE\t EDAD\t DNI\n");
            Ordenar(cliente,TAM);
            MostrarAlumnos(cliente,TAM);

            break;
        case 4: \\ El grafico de barras me falto !

            break;
        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}


