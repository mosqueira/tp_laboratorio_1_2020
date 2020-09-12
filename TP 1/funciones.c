#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
* \brief Se piden dos numeros con float y se suman
* \param resultado se convierte en el resultado de la suma
* \return devolucion de resultado como dato de operacion
*
*/
float sumaoperandos(float primero, float segundo)
{
    float suma;
    suma=primero+segundo;
    return suma;
}

/*
* \brief se piden dos numeros con float y se restan
* \param resultado se convierte en el resultado de la resta
* \return devolucion de resultado como dato de operacion
*
*/
float restaoperandos(float primero, float segundo)
{
    float resta;
    resta=primero-segundo;
    return resta;
}

/*
* \brief se piden dos numeros con float y se dividen
* \param resultado se convierte en el resultado de la division
* \return devolucion de resultado como dato de operacion
*/
float divisionoperandos(float primero, float segundo)
{
    float division;
    division = primero/segundo;
    return division;
}

/*
* \brief se piden dos numeros con float y se multiplican
* \param resultado se convierte en el resultado de la multiplicacion
* \return devolucion de resultado como dato de operacion
*
*/
float multiplicacionoperandos(float primero, float segundo)
{
    float multiplicacion;
    multiplicacion=primero*segundo;
    return multiplicacion;

}

/*
* \brief solicita el primer numero y busca su factorial
* \param resultado se convierte en el factorial encontrado
* \return devolucion de resultado como dato a mostrar
*
*/
float factorialoperandos(float primero )
{

    int i;
    float factorial1 = 1;

    for(i=1;i<=primero;i++)
    {
        factorial1 = factorial1 *i;
    }
    return factorial1;
}

/*
* \brief solicita el segundo numero y busca su factorial
* \param resultado se convierte en el factorial encontrado
* \return devolucion de resultado como dato a mostrar
*
*/
float factorialoperandos2(float segundo)
{
    int i;
    float factorial2 = 1;

    for(i=1;i<=segundo;i++)
    {
        factorial2 = factorial2 *i;
    }
    return factorial2;
}
/*
* \brief validar el numero que se tipea en el menu de opciones
* \param ingreso valido entre 1 y 5
* \return Alerta de error si no esta en el rango del menu
*
*/

void validar(int opcion)
{

    if(!(opcion > 0 && opcion < 6) )
    {
        printf("\nError Ingrese una opcion Valida \n");
    }
    fflush(stdin);

}


