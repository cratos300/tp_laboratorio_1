#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int obtenerEspacioLibre(EPersona lista[],int TAM)
{
    int i;
    int dato=-1;
    for(i=0; i<TAM; i++)
    {
        if(lista[i].estado==0)
        {
            dato=i;
            break;
        }
    }

    return dato;
}
int buscarPorDni(EPersona lista[], int DNI, int TAM)
{
    int indice=-1;
    int i;

    for(i=0; i<TAM; i++)
    {
        if(lista[i].dni==DNI && lista[i].estado == 1)
        {
            indice=i;
        }
    }
    return indice;
}
/*
void MostrarNombre(EPersona lista)
{
        printf("%s,%d,%d",lista.nombre,lista.edad,lista.dni);
}

void MostrarAlumnos(EPersona lista[],int TAM)
{
    int i;

    for(i=0;i<TAM;i++)
    {
        MostrarNombre(lista[i]);
    }
}

*/
void altaUsuario(EPersona cliente[],int tam)
{
    int estado;
    int flag;
    int indice;
    indice=obtenerEspacioLibre(cliente,tam);

    if(indice!=-1)
    {
        printf("Ingrese el dni");
        scanf("%d",&cliente[indice].dni);
        estado = buscarPorDni(cliente,cliente[indice].dni,tam);
        if(estado == -1)
        {
            fflush(stdin);
            printf("Ingrese su nombre:");
            gets(cliente[indice].nombre);
            fflush(stdin);
            printf("Ingrese su edad:");
            scanf("%d",&cliente[indice].edad);
            fflush(stdin);
            cliente[indice].estado=1;

        }
        else
        {
            printf("Error ese dni ya existe\n");
        }
    }
    else
    {
        printf("No hay lugar en el sistema");
    }


}
void borrarunCliente(EPersona persona[],int tam)
{
    char respuesta;
    int indiceDNI;
    int auxDNI;
    printf("Ingrese el dni a eliminar:");
    scanf("%d",&auxDNI);

    indiceDNI=buscarPorDni(persona,auxDNI,tam);
    if(indiceDNI!=-1)
    {
        printf("%s,%d,%d,",persona[indiceDNI].nombre,persona[indiceDNI].edad,persona[indiceDNI].dni);
        printf("Estas seguro que deseas eliminarlo s/n");
        fflush(stdin);
        scanf("%c",&respuesta);
        fflush(stdin);
        if(respuesta =='s')
        {
            persona[indiceDNI].estado=0;
            printf("Baja dada exitosamente");
        }
        else
        {
            printf("Accion cancelada\n");
        }

    }
    else
        printf("\nEse dato no existe\n");
}
void ImprimirListaOrdenadaPorNombre(EPersona personita[],int tam)
{
    int i,j;
    EPersona aux;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(personita[i].nombre,personita[j].nombre)>0)
            {
                aux = personita[i];
                personita[i] = personita[j];
                personita[j] = aux;
            }
        }
    }
    printf("Nombre\tEdad\tDNI\n");
    for(i=0; i<tam; i++)
    {
        if(personita[i].estado==1)
        {
            printf("\n\n%s\t%d\t%d",personita[i].nombre,personita[i].edad,personita[i].dni);
        }
    }
}
void inicializarEstado(EPersona personita[],int TAM)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        personita[i].estado = 0;
    }
}
void grafico(EPersona personas[], int tam)
{

    int cont1 = 0;
    int cont2  = 0;
    int cont3 = 0;
    int flag = 0;
    int flag2 = 0;
    int bandera;
    int i;
    int max = 0;
    system("cls");
    int cantidad[3];
    cantidad[0]= 0;
    cantidad[1] = 0;
    cantidad[2] = 0;
    for(i=0; i<tam; i++)
    {
        if(personas[i].estado==1)
        {
            if(personas[i].edad<18)
            {
                cantidad[0]++;
            }
            if(personas[i].edad>17 && personas[i].edad<36)
            {
                cantidad[1]++;
            }
            if(personas[i].edad>35)
            {
                cantidad[2]++;
            }
        }
    }
    for(i=0; i<3; i++)
    {
            if(bandera == 0 || cantidad[i]>max)
            {
                max = cantidad[i];
            }
        }
    printf("%d",max);
    for(i=max; i>0; i--)
    {
        if(cantidad[0]>=i)
        {
            printf("*\t");
            flag = 1;

        }
        if(cantidad[1]>=i)
        {
            if(flag == 0)
            {
                printf("\t*\t");
            }
            else
                printf("*\t");
            flag2 = 1;
        }
        if(cantidad[2]>=i)
        {
            if(flag == 0 && flag2  == 0)
            {
                printf("\t\t*");
            }
            else if(flag==0 && flag2 == 1)
            {
                printf("\t*");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
        flag2 = 0;
        flag =0;
    }
    printf("\n<18\t19-35\t>35\n");

    system("pause");
}
void hardCodearCliente(EPersona persona[],int tam)
{
    int i;
    persona[0].edad = 27;
    persona[0].dni = 12422;
    strcpy(persona[0].nombre,"toreto");
    persona[0].estado = 1;

    persona[1].edad = 30;
    persona[1].dni = 2142;
    strcpy(persona[1].nombre,"matias");
    persona[1].estado = 1;

    persona[2].edad = 54;
    persona[2].dni = 4242414;
    strcpy(persona[2].nombre,"junior");
    persona[2].estado = 1;

    persona[3].edad = 40;
    persona[3].dni = 1241;
    strcpy(persona[3].nombre,"joel");
    persona[3].estado = 1;

    persona[4].edad = 25;
    persona[4].dni = 4215;
    strcpy(persona[4].nombre,"tincho");
    persona[4].estado = 1;

    persona[5].edad = 200;
    persona[5].dni = 21241;
    strcpy(persona[5].nombre,"mauro");
    persona[5].estado = 1;

    persona[6].edad = 200;
    persona[6].dni = 2142;
    strcpy(persona[6].nombre,"laura");
    persona[6].estado = 1;

    persona[7].edad = 3;
    persona[7].dni = 4214;
    strcpy(persona[7].nombre,"carlos");
    persona[7].estado = 1;


}
