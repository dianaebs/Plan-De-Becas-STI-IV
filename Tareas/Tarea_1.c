#include<stdio.h>

int main (){/*esto es un comentario de varias lineas*/
int numero, numero2, resultado;

printf("ingrese el valor:\n");
scanf("%d",&numero);
printf("El valor de su numero es:%d",numero);


// Comentario de diana

printf("ingrese el valor2:\n");
scanf("%d",&numero2);
printf("El valor de su numero es:%d\n",numero2);

resultado=numero+numero2;
printf("La suma de los numeros es:%d\n",resultado);
		
resultado=numero-numero2;
printf("La resta de los numeros es:%d\n",resultado);

resultado=numero*numero2;
printf("La multiplicacion de los numeros es:%d\n",resultado);

resultado=numero%numero2;
printf("El modulo de los numeros es:%d\n",resultado);

}


