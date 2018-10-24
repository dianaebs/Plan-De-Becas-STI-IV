#include <stdio.h>
	//TAREA 10 CALCULADORA
int main (){

	/*Variables*/
float  n1, n2, resultado;
char operacion;

	/*Menu de Operaciones*/	
printf("Por favor seleccione una operacion\n");
printf("s para realizar una suma\n");
printf("r para realizar una resta\n");
printf("m para realizar una multiplicacion\n");
printf("d para realizar una division\n");

printf("Seleccione la letra de la operacion y escribala aqui: \n");
scanf("%c",&operacion);

switch(operacion)
	{
	case 's':
		printf("ingrese un numero: \n");
		scanf("%f",&n1);
		printf("ingrese un segundo numero: \n");
		scanf("%f",&n2);
		resultado=n1+n2;	
		printf("El resultado es:%f",resultado); 
		break;		

	case 'r':
                printf("ingrese un numero: \n");
                scanf("%f",&n1);
                printf("ingrese un segundo numero: \n");
                scanf("%f",&n2);
                resultado=n1-n2;
                printf("El resultado es:%f",resultado);
                break;
	case 'm':
                printf("ingrese un numero: \n");
                scanf("%f",&n1);
                printf("ingrese un segundo numero: \n");
                scanf("%f",&n2);
                resultado=n1*n2;
                printf("El resultado es:%f",resultado);
                break;


	case 'd':
                printf("ingrese un numero: \n");
                scanf("%f",&n1);
                printf("ingrese un segundo numero: \n");
                scanf("%f",&n2);
                resultado=n1/n2;
                printf("El resultado es:%f",resultado);
                break;

	}
}
