#include <stdio.h>
	// APLICACION DE FOR
	/*Programa que cuente un numero*/
	

int main (){

	/*Variables*/
int numero;
int contador = 1;

	/*Solicitud de numero a usuario*/

printf("Ingrese un valor: \n");
scanf("%d",&numero);

	/*cuerpo de for*/

for (contador; contador <= numero; contador = contador +1)
	{
	printf("%d\n", contador);
	}
	return 0;

}

