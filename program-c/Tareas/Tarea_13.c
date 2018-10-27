		//TAREA 13 SIGNOS DEL ZODIACO
#include <stdio.h>
int main (){

	/*MIS VARIABLES*/
int numero, signo;

	/*Tabla con signos*/
printf("\t\tLISTADO DE ZIGNOS DEL ZODIACO\n\n");
printf("\t\t\tSIGNO\n\n");
printf("\t\t1 Aries\n");	
printf("\t\t2 Tauro\n");
printf("\t\t3 Geminis\n");
printf("\t\t4 Cancer\n");
printf("\t\t5 Leo\n");
printf("\t\t6 Virgo\n");
printf("\t\t7 Libra\n");
printf("\t\t8 Escorpio\n");
printf("\t\t9 Sagitario\n");
printf("\t\t10 Capricornio\n");
printf("\t\t11 Acuario\n");
printf("\t\t12 Picis\n\n");

printf("Ingrese el numero de su signo zodiacal: \n");
scanf("%d",&numero);

	if(2 || 6 || 10)
	{printf("Su signo pertenece a la categoria Tierra\n");}


else	
	if(4 || 8 || 12)
	{printf("Su signo pertenece a la categoria Agua\n");}
	

else
	if(1 || 5 || 9)
	{printf("Su signo pertenece a la categoria Fuego\n");}


else	
	if(3 || 7 || 11)
	{printf("Su signo pertenece a la categoria Aire\n");}
	

return 0;

}

