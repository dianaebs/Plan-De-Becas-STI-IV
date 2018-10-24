#include <stdio.h>
	//TAREA 8: NUMERO MAS GRANDE ENTRE 4
 	/*Ejercicio en clase jueves 11 oct2018*/

int main (){
	/*Definicion de variables*/
int n1,n2,n3,n4;

	/*Ingreso y escaneo de valores*/
printf("ingrese un valor entero: ");
scanf("%d",&n1);

printf("ingrese el segundo valor entero: \n");
scanf("%d",&n2);

printf("ingrese el tercer valor entero: \n");
scanf("%d",&n3);

printf("Ingrese un cuarto valor: \n");
scanf("%d",&n4);
	
	
	/*CONDICION CON IF*/

if (n1 > n2 && n1> n3 && n1> n4)
	{printf("%d Es el mayor\n",n1);}
else
	if (n2 > n3 && n2 > n4)
	{printf("%d El el mayor\n",n2);}
	
else  
	if (n3> n4)	
	{printf("%d Es el mayor\n",n3);}
else
	printf("%d Es el mayor\n",n4);

return 0; 

}	
