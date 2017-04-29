#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

#define O 4
void datodelCliente(int[],char[][30],int[],int[],int);


int main()
{
    int numcliente[O]={7,2,6,}, edad[O]={3,4,7,},DNI[O]={4124124,41241241,1241412},estado[O]={1,1,1,},flag;
    char nombre[O][60]={"Lucas", "Matias", "Damian"};
    int i,j;
    int auxInt;
    char respuesta,auxString[300];
    char seguir='s';
    int opcion=0;


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
            case 1:flag=0;
                for(i=0; i<O; i++)
                {
                    if(estado[i]==0)
                        {
                        fflush(stdin);
                        printf("Ingrese el numero de cliente");
                        scanf("%d",&numcliente[i]);
                        fflush(stdin);
                        printf("Ingrese su nombre:");
                        gets(nombre[i]);
                        fflush(stdin);
                        printf("Ingrese su numero DNI:");
                        scanf("%d",&DNI[i]);
                        fflush(stdin);
                        printf("Ingrese su edad:");
                        scanf("%d",&edad[i]);
                        fflush(stdin);
                        estado[i] = 1;
                        flag = 1;
                        break;
                    }
                }
                if(flag==0)
                {
                    printf("Porfavor borre algun dato, memoria llena:");
                }

                break;
            case 2:flag=0;
                printf("Ingrese cliente a elminar: ");
                scanf("%d",&auxInt);
                for(i=0;i<O;i++)
            {
                if(estado[i]==1 && auxInt==numcliente [i])
                {
                    printf("\n%d\n%s\n%d\n%d",numcliente[i],nombre[i],DNI[i],edad[i]);
                    printf("\nSeguro que deseas eliminarlo?:");
                    respuesta=getche();
                    if(respuesta=='s')
                    {
                        estado[i]=0;
                    }
                    else
                    {
                        printf("\nAh sido cancelado");
                    }
                    flag=1;
                    break;
                }
                }
                break;
            case 3:
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
