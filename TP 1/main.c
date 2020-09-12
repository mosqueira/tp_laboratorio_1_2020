#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>

int main()
{
    char seguir='s';
    int opcion=0;
    int validacion;
    float primero=0;
    float segundo=0;
    float resultado;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float factorial1;
    float factorial2;


    while(seguir=='s')
    {
        printf("************************************* \n");
        printf("CALCULADORA \n");
        printf("************************************* \n");
        printf("1- Ingresar 1er operando (A= %.2f)\n",primero);
        printf("2- Ingresar 2do operando (B= %.2f)\n",segundo);
        printf("3- Calcular todas las operacions\n");
        printf("  A) Calcular la suma(A+B)\n");
        printf("  B) Calcular la resta (A-B)\n");
        printf("  c) Calcular la division (A/B)\n");
        printf("  D) Calcular la multiplicacion (A*B)\n");
        printf("  E) Calcular el factorial de (A! y B!)\n");
        printf("4- Informar resultados\n");
        printf("  A)El resultado de A+B es: \n");
        printf("  B)El resultado de A-B es: \n");
        printf("  c)El resultado de A/B es: \n");
        printf("  D)El resultado de A*B es: \n");
        printf("  E)El factorial de A es: y El factorial de B es: \n");
        printf("5- Salir\n");
        printf("************************************* \n");

        printf("Ingrese una opcion entre 1 y 5: \n");
        scanf("%d",&opcion);

        printf("************************************* \n");

        validar(opcion);
        fflush( stdin );

        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando: \n");
                scanf("%f",&primero);
                fflush( stdin );
                break;
            case 2:
                printf("Ingresar 2do operando: \n");
                scanf("%f",&segundo);
                fflush( stdin );
                break;
            case 3:
                suma=sumaoperandos(primero,segundo);
                resta=restaoperandos(primero,segundo);
                division=divisionoperandos(primero,segundo);
                multiplicacion=multiplicacionoperandos(primero,segundo);
                factorial1=factorialoperandos(primero);
                factorial2=factorialoperandos(segundo);
                fflush( stdin );
                break;
           case 4:
                printf("el resultado de A+B es: %.2f\n", suma);
                printf("el resultado de A-B es: %.2f\n", resta);
                if(segundo==0)
                {
                    printf("Error no se puede dividir entre 0\n");
                }else{
                    printf("el resultado de A/B es: %.2f\n", division);
                }
                printf("el resultado de A*B es: %.2f\n", multiplicacion);
                if(primero>0 && primero<35)
                {
                    printf("El factorial del numero %.2f es: %.2f\n",primero,factorial1);
                }else{

                    printf("Error no se puede calcular el factorial de este numero\n");
                }
                if(segundo>0 && segundo<35)
                {
                    printf("El factorial del numero %.2f es: %.2f\n",segundo,factorial2);
                }else{

                    printf("Error no se puede calcular el factorial de este numero\n");
                }
                fflush( stdin );



                break;
            case 5:
                seguir = 'n';
                break;

        }


    }

    return 0;

}
