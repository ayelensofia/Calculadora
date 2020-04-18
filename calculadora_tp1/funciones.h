
#include <stdio.h>


/** \brief permite el ingreso del primer operando del tipo dato entero
 *
 * \param a int  dato que ingresa el usuario
 * \return int dato ya ingresado
 *
 */
int operandoUno(int a);


/** \brief permite el ingreso del segundo operando del tipo dato entero
 *
 * \param b int  dato que ingresa el usuario
 * \return int  dato ya ingresado
 *
 */
int operandoDos(int b);
/** \brief permite sumar los operandos ingresados
 *
 * \param a int primer operando
 * \param b int segundo operando
 * \return int  el resultado de la suma
 *
 */
int sumar(int a,int b);
/** \brief permite restar los operandos ingresados
 *
 * \param a int primer operando
 * \param b int segundo operando
 * \return int el resultado de la resta
 *
 */
int restar(int a,int b);
/** \brief permite multiplicar los operandos ingresados
 *
 * \param a int primer operando
 * \param b int segundo operando
 * \return int resultado de la multiplicacion
 *
 */
int multiplicar(int a,int b);
/** \brief permite dividir los operandos ingresados
 *
 * \param a int primer operando
 * \param b int primer operando
 * \return float resultado de la division
 *
 */
float dividir(int a,int b);
/** \brief permite calcular el factorial del primer operando
 *
 * \param a int primer operando
 * \return int factorial del primer operando
 *
 */
int factorialA(int a);
/** \brief permite calcular el factorial del segundo operando
 *
 * \param b int segundo operando
 * \return int factorial del segundo operando
 *
 */
int factorialB(int b);
/** \brief muestra el menu de opciones
 *
 * \param texto[] char opcion a elegir
 * \return int opcion seleccionada
 *
 */
int menuUsuario(char texto[]);


// FUNCIONES_H_INCLUDED
