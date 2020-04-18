#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int operandoUno(int a);
int operandoDos(int b);
int sumar(int a,int b);
int restar(int a,int b);
int multiplicar(int a,int b);
float dividir(int a,int b);
int factorialA(int a);
int factorialB(int b);
int menuUsuario(char texto[]);

int main()
{

    int opcion;
    int uno;
    int dos;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int resultadoFactorialA;
    int resultadoFactorialB;


    do
    {
        opcion=menuUsuario("1.Ingresar primer operando\n2.Ingresar segundo operando\n3.Calcular todas las operaciones\n4.Mostrar resultados\n5.Salir\nElegir opcion");


        switch(opcion)
        {
            case 1:

            uno=operandoUno(uno);


            break;
            case 2:

            dos=operandoDos(dos);

            break;
            case 3:

            suma=sumar(uno,dos);
            resta=restar(uno,dos);
            multiplicacion=multiplicar(uno,dos);
            division=dividir(uno,dos);
            resultadoFactorialA=factorialA(uno);
            resultadoFactorialB=factorialB(dos);


            break;
            case 4:
            {
                printf("la suma de %d y %d es:%d\n",uno,dos,suma);
                printf("la resta de %d y %d es:%d\n",uno,dos,resta);
                printf("la multiplicacion de %d y %d es:%d\n",uno,dos,multiplicacion);
                if(dos!=0)
                {
                    printf("la division de %d y %d es:%.2f\n",uno,dos,division);
                }else
                    {
                        printf("no fue posible dividir por 0\n");
                    }



                    if(uno<0 && dos<0)
                    {
                        printf("no fue posible calcular factorial\n");

                    }else
                    {
                        if(uno>0 && dos<0)
                        {
                        printf("no fue posible sacar factorial de %d y el factorial de %d es %d\n",dos,uno,resultadoFactorialA);

                        }else
                        {
                            if(uno<0 && dos>0)
                            {
                                printf("no fue posible sacar factorial de %d y el factorial de %d es %d\n",uno,dos,resultadoFactorialB);
                            }else
                            {
                                printf("el factorial de %d es %d y el factorial de %d es: %d\n",uno,resultadoFactorialA,dos,resultadoFactorialB);
                            }
                        }
                    }




                }

                break;

            }
        system("pause");
        system("cls");

        }while(opcion!=5);



}


