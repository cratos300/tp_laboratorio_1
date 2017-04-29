#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numero1;
    int numero2;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    int i, fact=1;


    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");



        scanf("%d",&opcion);



        switch(opcion)

        {
            case 1:printf("Ingrese el primer numero:");
                    scanf("%d",&numero1);
            case 2:printf("Ingrese el segundo numero:");
                    scanf("%d",&numero2);


                    while(numero1==0&&numero2==0)
                    {
                        printf("Ingrese un numero distinto a 0");
                        scanf("%d",&numero1);
                        printf("Ingese un numero distinto a 0");
                        scanf("%d",&numero2);
                    }




                break;

            case 3:suma=sumar(numero1,numero2);
                    printf("La suma es %d\n",suma);
                    system("Pause");

                break;
            case 4:resta=restar(numero1,numero2);
                    printf("La resta es %d\n",resta);
                    system("Pause");

                break;
                system("Pause");
            case 5:division=dividir(numero1,numero2);
                    printf("La division es %d\n",division);
                    system("Pause");

                break;
            case 6:multiplicacion=multiplicar(numero1,numero2);
                    printf("La multiplicaciones %d\n",multiplicacion);
                    system("Pause");

                break;
            case 7:for(i=1;i<=numero1;i++)
                    fact=fact*i;
                    printf("El numero factorial de %d es %d\n",numero1,fact);

                break;
            case 8:suma=sumar(numero1,numero2);
                    printf("La suma es %d\n",suma);
                    resta=restar(numero1,numero2);
                    printf("La resta es %d\n",resta);
                    multiplicacion=multiplicar(numero1,numero2);
                    printf("La multiplicaciones %d\n");
                    for(i=1;i<=numero1;i++)
                    fact=fact*i;
                    printf("El numero factorial de %d es %d\n",numero1,fact);
                    while(numero2==0){
                        printf("Ingrese un numero distinto a 0:");
                        scanf("%d",&numero2);
                    }
                    division=dividir(numero1,numero2);
                    printf("La division es %d\n",division);
                    system("Pause");

                break;



            case 9:
                system("cls");

                seguir = 'n';

                break;
        }



    }



    return 0;

}

