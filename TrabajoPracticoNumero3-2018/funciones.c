#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define ARCH    ".\\peliculas.dat"
void AltaPelicula(EMovie movie)
{
    FILE* peliculas;
    if ((peliculas = fopen(ARCH, "r+b")) == NULL)
    {
        if ((peliculas = fopen(ARCH, "w+b")) == NULL)
        {
            printf("No se pudo abrir el archivo");
            exit(1);
        }
    }
        printf("\nIngrese el nombre de la pelicula: ");
        fflush(stdin);
        gets(movie.titulo);
        printf("\nIngrese el genero: ");
                fflush(stdin);
                gets(movie.genero);

                printf("\nIngrese la duracion (minutos): ");
                scanf("%d",&movie.duracion);

                printf("\nIngrese descripcion de la pelicula: ");
                fflush(stdin);
                gets(movie.descripcion);

                printf("\nIngrese el puntaje: ");
                scanf("%d", &movie.puntaje);

                printf("\nIngrese el link de una imagen para la pelicula: ");
                fflush(stdin);
                gets(movie.linkImagen);

                movie.estado = 1;

                fseek(peliculas, 0L, SEEK_END);
                fflush(stdin);
                fwrite(&movie, sizeof(movie), 1, peliculas);

                fclose(peliculas);
}


void borrarPelicula(EMovie movie)
{

    movie.estado = 0;

    int cantidad;

    char tituloDePelicula[100];

    FILE  *peliculas;

    if ((peliculas = fopen(ARCH, "rb+")) == NULL)
    {
        printf("No se pudo abrir el archivo");
        exit(1);
    }

    printf("Ingrese pelicula a borrar: ");
    fflush(stdin);
    gets(tituloDePelicula);


    while(!feof(peliculas))
    {
        cantidad = fread(&movie, sizeof(movie), 1, peliculas);

        if(cantidad != 1)
        {
            if(feof(peliculas))
            {
                printf("la pelicula no existe");
                break;
            }
        }
        if (strcmpi(tituloDePelicula, movie.titulo) == 0 && movie.estado != 0)
        {
            movie.estado = 0;
            fseek(peliculas, (long) (-1) * (sizeof(movie)), SEEK_CUR);
            fwrite(&movie, sizeof(movie), 1, peliculas);
            printf("Pelicula borrada con exito.");
            break;
        }

    }

    fclose(peliculas);
}
void modificarTitulo (EMovie movie)
{
    int opt = 1;
    char respuesta;
    int cantidad;
    int auxint;
    int opcion;
    char aux [50];
    FILE *peliculas;
    if ((peliculas = fopen(ARCH, "r+b")) == NULL)
    {
        printf("No se pudo abrir el archivo");
        exit(1);
    }

    printf("Ingrese pelicula: ");
    fflush(stdin);
    gets(aux);

    while(!feof(peliculas))
    {
        cantidad = fread(&movie, sizeof(movie), 1, peliculas);

        if(cantidad != 1)
        {
            if(feof(peliculas))
            {
                printf("la pelicula no existe");
                break;
            }
        }
        if (strcmpi(aux, movie.titulo) == 0 && movie.estado != 0)
        {
             printf("Estas seguro que deseas modificar esta pelicula?s/n");
             fflush(stdin);
             scanf("%c",&respuesta);
             if(respuesta != 's')
             {
                 printf("Accion cancelada, No se modifica nada\n");
             }
             else
             {
                 while(opt)
                 {
                    printf("MODIFICAR\n\n");
                    printf("1- Titulo \n");
                    printf("2- Genero\n");
                    printf("3- Duracion\n");
                    printf("4- Descripcion\n");
                    printf("5- Puntaje\n");
                    printf("6- Cancelar\n");

                    fflush(stdin);
                    scanf("%d",&opcion);

                    switch(opcion)
                    {
                    case 1:
                        printf("Ingrese el nuevo titulo: ");
                        fflush(stdin);
                        gets(aux);
                        strcpy(movie.titulo, aux);
                        system("cls");

                        break;
                    case 2:
                        printf("Ingrese el nuevo genero: ");
                        fflush(stdin);
                        gets(aux);
                        strcpy(movie.genero, aux);
                        system("cls");

                        break;
                    case 3:;
                        printf("Ingrese la nueva duracion: ");
                        scanf("%d", &auxint);
                        system("cls");
                        movie.duracion = auxint;

                        break;
                    case 4:
                        printf("Ingrese el nuevo descripcion: ");
                        fflush(stdin);
                        gets(aux);
                        strcpy(movie.descripcion, aux);
                        system("cls");

                        break;
                    case 5:
                        printf("Ingrese el nuevo puntaje: ");
                        scanf("%d", &auxint);
                        movie.puntaje = auxint;
                        system("cls");

                        break;
                    case 6:
                        opt = 0;
                        break;

                 }
             }
                    fseek(peliculas, (long) (-1) * (sizeof(movie)), SEEK_CUR);
                    fwrite(&movie, sizeof(movie), 1, peliculas);
                    printf("\nSe modificaron los datos correctamente\n");
                    fclose(peliculas);
                    break;
        }

    }
    }
    fclose(peliculas);
    }
void MostrarArchivo(EMovie movie)
{
    int cant;
    FILE *bin;
    if ((bin = fopen(ARCH, "r+b")) == NULL)
    {
        printf("Error no se pudo abrir el archivo");
    }
    rewind (bin);
    printf("Titulo\t Genero\t Duracion\t Descripcion\t Puntaje\n");
   while(!feof(bin)){
      cant = fread(&movie,sizeof(movie),1,bin);

      if(cant!=1){
         if(feof(bin)){
			break;
         }
         else{
			printf("No leyo el ultimo registro");
			break;
         }
      }
        if(movie.estado == 1)
        {
            printf("%s\t%s\t%d\t%s\t%d\n",movie.titulo,movie.genero,movie.duracion,movie.descripcion,movie.puntaje);
        }

   }
}
