#include <stdio.h>
int main()
{
         /*MIS VARIABLES*/

int valor;  
int decimal;
char caracter;

	
        /*SOLICITUD DE NUMEROS Y CARACTERES*/

printf("Ingrese por favor un entero: ");
scanf(" %d",&valor);

printf("Ahora ingrese un valor, puede no ser entero:\n");
scanf(" %d",&decimal);

printf("Finalmente ingre cualquier caracter, puede ser una letra o signo:\n");
scanf(" %c",&caracter);



        /*MUESTRA DE NUMEROS INGRESADOS*/

printf("El valor entero ingresado es: %d\n",valor);
printf("El valor no entero ingresado es: %d\n",decimal);
printf("El caracter ingresado es: %c\n",caracter);


}
