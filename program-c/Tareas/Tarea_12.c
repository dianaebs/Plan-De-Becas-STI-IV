	//TAREA12 CONVERSIONES DE TIEMPO
#include <stdio.h>

int main (){
		/*Mis Variables*/
float seg, min, hrs, dias, an, resultado;
int conversion;

	/*Menu de conversiones*/

printf("\n\t\t MENU DE CONVERSIONES\n\n");
printf("\t1 Para converir de anios a dias\n");
printf("\t2 Para convertir de dias a horas\n"); 
printf("\t3 Para convertir de horas a minutos\n");
printf("\t4 Para convertir de minutos a segunds\n\n");

printf("Seleccione y escriba aqui el numero de la conversion a realizar: \n");
scanf("%d",&conversion);

switch (conversion)
	{
	case 1:
		printf("ingrese la cantidad de anios: \n");
		scanf("%f",&an);
		resultado=an*365;
		printf("El resultado de la conversion es:%fdias",resultado);
		break;

	case 2:
                printf("ingrese la cantidad de dias: \n");
                scanf("%f",&dias);
                resultado=dias*24;
		printf("El resultado de la conversion es:%fhoras",resultado);
                break;

	case 3:
                printf("ingrese la cantidad de horas: \n");
                scanf("%f",&hrs);
                resultado=hrs*60;
		printf("El resultado de la conversion es:%fminutos",resultado);
                break;


	case 4:
                printf("ingrese la cantidad de minutos: \n");
                scanf("%f",&min);
                resultado=an*60;
		printf("El resultado de la conversion es:%fsegundos",resultado);
                break;

	}

}
