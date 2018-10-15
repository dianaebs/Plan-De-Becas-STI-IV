#include <stdio.h>
	//EJERCICIO LUNES 15 DE OCTUBRE
	/*Pedir al ususrio un numero y que se imprima en pantalla la secuencia*/
	/*Requiere definir dos variables antes de entrar a while*/

int main (){
	int numero;
	int contador = 1;



printf("Por favor ingrese un valor: \n");
scanf("%d", &numero);

		// CUERPO DE WHILE

while (contador <= numero) {
 	printf("%d\n", contador);
	contador = contador+1;


}

}

