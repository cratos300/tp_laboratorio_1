#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED


int sumar (int x, int y)
{
    int resultado;
    resultado = x+y;
    return resultado;
}
int restar (int x, int y)
{
    int resultado;
    resultado = x-y;
    return resultado;
}
int dividir (int x, int y)
{
    int resultado;
    resultado = x/y;
    return resultado;
}
int multiplicar (int x, int y)
{
    int resultado;
    resultado = x*y;
    return resultado;
}
int validar (int x)
{
    while(x==0)
    {
        printf("Error, Reingrese un numero distinto a 0");
        scanf("%d",&x);
    }
    return x;
}
int factorial (int num1)
{
    int i;
    float factorial=1;
    for(i=num1; i>0; i--)
    {
        factorial = factorial*i;
    }
    return factorial;
}
