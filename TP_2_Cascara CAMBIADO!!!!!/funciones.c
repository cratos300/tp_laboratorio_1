#include "funciones.h"
int obtenerEspacioLibre(EPersona lista[],int tam)
{
    int i;
    int dato=-1;
    for(i=0;i<tam;i++)
    {
        if(lista[i].estado==0)
        {
            dato=i;
            break;
        }
    }

    return dato;
}
int buscarPorDni(EPersona lista[], int DNI, int tam)
{
    int indice=-1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(lista[i].dni==DNI && lista[i].estado==1)
        {
            indice=i;
        }
    }
    return indice;
}
void Ordenar(EPersona lista[], int tam)
{
EPersona aux;
int i;
int j;
            for(i=0; i<tam-1; i++)
            {
                for(j=i+1; j<tam; j++)
                {
                    if(lista[i].estado==1 && lista[j].estado==1)
                    {
                        if(strcmp(lista[i].nombre,lista[j].nombre)>0)
                        {
                            aux=lista[i];
                            lista[i]=lista[j];
                            lista[j]=aux;
                        }

                    }
                }
            }
        }

void MostrarNombre(EPersona lista)
{
        printf("%s\t%d\t%d\n",lista.nombre,lista.edad,lista.dni);
}

void MostrarAlumnos(EPersona lista[],int TAM)
{
    int i;
    int flag=0;
    for(i=0;i<TAM;i++)
    {
        if(lista[i].estado==1)
        {
             MostrarNombre(lista[i]);
             flag=1;
        }
    }
    if(flag==0)
        {
            printf("No hay datos cargados!\n");
        }

}


