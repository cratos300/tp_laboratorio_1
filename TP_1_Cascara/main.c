#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numero1=0;
    int numero2=0;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    int fact=1;
    int i=1;
    int flag=0;





                while(seguir=='s')
                    {

        printf("1- Ingresar 1er operando (%d=x)\n",numero1);
        printf("2- Ingresar 2do operando (%d=y)\n",numero2);
        printf("3- Calcular la suma (%d+%d)\n",numero1,numero2);
        printf("4- Calcular la resta (%d-%d)\n",numero1,numero2);
        printf("5- Calcular la division (%d/%d)\n",numero1,numero2);
        printf("6- Calcular la multiplicacion (%d*%d)\n",numero1,numero2);
        printf("7- Calcular el factorial (%d!)\n",numero1);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");



    {
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el primer operando:");
            scanf("%d",&numero1);
        case 2:
            printf("Ingrese el segundo operando:");
            scanf("%d",&numero2);
            numero2=validar(numero2);
            break;
        case 3:
            suma=sumar(numero1,numero2);
            printf("La suma de los numeros es %d\n",suma);
            break;
        case 4:
            resta=restar(numero1,numero2);
            printf("La resta de los numeros es %d\n",resta);
            break;
        case 5:
            division=dividir(numero1,numero2);
            printf("La division de los numeros es %d\n",division);
            break;
        case 6:
            multiplicacion=multiplicar(numero1,numero2);
            printf("La multiplicacion de los numeros es %d\n",multiplicacion);
            break;
        case 7:fact=factorial(numero1);
            printf("El factorial es %d\n",fact);
            break;
        case 8:
            suma=sumar(numero1,numero2);
            printf("La suma de los numeros es %d\n",suma);
            resta=restar(numero1,numero2);
            printf("La resta de los numeros es %d\n",resta);
            division=dividir(numero1,numero2);
            printf("La division de los numeros es %d\n",division);
            multiplicacion=multiplicar(numero1,numero2);
            printf("La multiplicacion de los numeros es %d\n",multiplicacion);
            fact=factorial(numero1);
            printf("El factorial es %d\n",factorial);


            break;
        case 9:
            seguir = 'n';
            break;
             }


        }


}
}















