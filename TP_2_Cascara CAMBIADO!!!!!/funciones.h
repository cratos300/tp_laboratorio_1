#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[],int TAM);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int DNI, int TAM);
/** \brief Verifica y ordena segun el nombre
 *
 * \param Lista de array se pasa por parametro
 * \param Tamaño para saber hasta cuando llega a recorrer..
 * \return No retorna nada..
 *
 */
void Ordenar(EPersona lista[], int tam);
/** \brief Muestra invidualmente cada uno
 *
 * \param recibe el listado de personas
 * \param
 * \return
 *
 */
void MostrarNombre(EPersona lista);
/** \brief Muestra el array de la lista
 *
 * \param recibe el arrayde personas
 * \param recibe el tamaño a recorrer
 * \return No retorna nada
 *
 */
void MostrarAlumnos(EPersona lista[],int);
#endif // FUNCIONES_H_INCLUDED
/*
void MostrarNombre(EPersona lista);


void MostrarAlumnos(EPersona lista[],int TAM);
*/
