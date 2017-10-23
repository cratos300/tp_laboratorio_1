#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void AltaPelicula(EMovie Puntero [], int tam)
{
    int indice;
    int esta;
    char titulito[20];
    int i;

    indice = buscarLibre(Puntero,tam);
    if(indice == -1)
    {
        printf("No hay lugar disponible");
    }
    else
    {
        printf("Ingrese el titulo:");
        scanf("%s",&titulito);

        esta=BuscarProgramador2(Puntero,titulito,tam);

        if(esta!=-1)
        {
            printf("Error, ese id ya esta registrado");
        }
        else
        {
            strcpy(Puntero[indice].titulo,titulito);
            printf("Ingrese el genero:");
            fflush(stdin);
            gets(Puntero[indice].genero);
            printf("Ingrese la descripcion:");
            fflush(stdin);
            gets(Puntero[indice].descripcion);
            printf("Ingrese el puntaje:");
            scanf("%d",&Puntero[indice].puntaje);
            printf("Ingrese el link de la imagen:");
            fflush(stdin);
            gets(Puntero[indice].linkImagen);
            printf("Ingrese el tiempo de duracion:");
            scanf("%d",&Puntero[indice].duracion);
            Puntero[indice].estado = 1;

        }



    }
}
int buscarLibre(EMovie Puntero [],int tam)
{

    int indice=-1;
    int i;

    for(i=0; i<tam; i++)
    {
        if(Puntero[i].estado==0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int BuscarProgramador2(EMovie Puntero [],char titulito[],int tam)
{
    int indice=-1;
    int i;

    for(i=0; i<tam; i++)
    {
        if(strcmp(Puntero[i].titulo,titulito)==0 && Puntero[i].estado == 1)
        {

            indice=i;
            break;
        }
    }
    return indice;
}
void inicializarEstructura(EMovie puntero[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        puntero[i].estado=0;
    }
}
void mostrar (EMovie puntero[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(puntero[i].estado == 1)
        {
            printf("\n%s--%s--%s--%d--%s--%d\n",puntero[i].titulo,puntero[i].genero,puntero[i].descripcion,puntero[i].puntaje,puntero[i].linkImagen,puntero[i].duracion);
        }

    }
}

void borrarPeliculass(EMovie puntero[],int tam)
{
    int i;
    char auxPeli[20];
    int dato;
    char eliminar;
    printf("Ingrese el nombre de la pelicula a eliminar\n");
    fflush(stdin);
    gets(auxPeli);
    dato=RecorrerPeliculas(puntero,auxPeli,tam);
    if(dato== -1)
    {
        printf("No se encontro ningun titulo con ese nombre!!!!!!\n");
    }
    else
    {
        printf("%s--%s--%s--%d--%s--%d\n",puntero[dato].titulo,puntero[dato].genero,puntero[dato].descripcion,puntero[dato].puntaje,puntero[dato].linkImagen,puntero[dato].duracion);

        printf("Estas seguro que deseas eliminarlo?s/n");
        scanf("%c",&eliminar);
        if(eliminar == 's')
        {
            puntero[dato].estado = 0;
            printf("Baja correctamente\n");
        }
        else
        {
            printf("Accion cancelada");
        }
    }
}

int RecorrerPeliculas (EMovie puntero[],char dato[],int tam)
{
    int i;
    int indice = -1;
    for(i=0;i<tam;i++)
    {
        if(strcmp(puntero[i].titulo,dato)==0 && puntero[i].estado==1)
        {
            indice = i;
            break;
        }

    }
    return indice;
}
void modificarTitulo (EMovie puntero[],int tam)
{
    int dato;
    char respuesta;
    char auxString[20];
    printf("Ingrese el titulo a modificar");
    fflush(stdin);
    gets(auxString);
    dato=RecorrerPeliculas(puntero,auxString,tam);
    if(dato==-1)
    {
        printf("Ese titulo no existe");
    }
    else
    {
        printf("%s--%s--%s--%d--%s--%d\n",puntero[dato].titulo,puntero[dato].genero,puntero[dato].descripcion,puntero[dato].puntaje,puntero[dato].linkImagen,puntero[dato].duracion);
        printf("Ingrese el titulo modificado");
        fflush(stdin);
        gets(auxString);
        printf("Estas seguro que deseas modificarlo??s/n");
        scanf("%c",&respuesta);
        if(respuesta == 's')
        {
            strcpy(puntero[dato].titulo, auxString);
            printf("El dato se modifico exitosamente");
        }
        else
        {
            printf("Accion cancelada");
        }
    }

}




