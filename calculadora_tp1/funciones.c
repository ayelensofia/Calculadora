#include "funciones.h"

int operandoUno(int a)
{

        printf("ingrese operando:");
        fflush(stdin);
        scanf("%d",&a);

        return a;

}
int operandoDos(int b)
{


        printf("ingrese operando:");
        fflush(stdin);
        scanf("%d",&b);

    return b;
}
int sumar(int a,int b)
{

       int suma;
       suma=a+b;
       return suma;


}
int restar(int a,int b)
{

    int resta;
    resta=a-b;
    return resta;
}
int multiplicar(int a,int b)
{

    int multiplicacion;
    multiplicacion=a*b;
    return multiplicacion;
}
float dividir(int a,int b)
{

    float division;
    division=a/(float)b;
    return division;
}
int factorialA(int a)
{

    int resultado;
    if(a>0)
    {
        if(a==1)
        return 1;
        resultado=a*factorialA(a-1);
        return resultado;
    }


}




int factorialB(int b)
{

    int resultado;
    if(b>0)
    {
        if(b==1)

        return 1;
        resultado=b*factorialB(b-1);
        return resultado;

    }


}
int menuUsuario(char texto[])
{

    int opcion;
    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;

}
