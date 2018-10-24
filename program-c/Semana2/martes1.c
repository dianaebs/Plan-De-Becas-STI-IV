#include <stdio.h>
	//EJERCIO MARTES 16 OCT
	/*Aplicacion de do while*/

int main (){

int numero;
int contador = 1;

printf("Por favor ingrese un valor: \n");
scanf("%d",&numero); 
 
	/* Cuerpo de do while*/

do{
	printf("%d\n",contador);
       	contador = contador+1;
}while(contador <= numero);

return 0;

}

