 /*Proyecto final:Juego del ahorcado.

        Plan de Becas. Servicios de Tecnlogias de la Informacon IV DGTIC
        Curso: Introduccion a la programacion en C
        Instrucctores:Francisco Martinez Garrido y Cesar Gustavo Sanchez                        de la Rosa

        AUTORIA DEL CODIGO: Jazmin Cruz Martinez*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#define OPORT 10


void FuncArreglo(char Arreglo[]){

int x;   //largo de la cadena arreglo
int i;			 //i es mi contador
char temp[100];
char palabra[100];
char letra;


x = strlen(Arreglo);
temp[x] ='\0';

	for(i = 0; i<x; i++){
	printf("_ ");
	temp[i] = '-';

	}

printf("\n\n");

i=1;
int intento = 0;

int aux, cont;
cont=OPORT;

	while(cont != 0){

		printf("\n\nIntroduzca una letra:\n\t\t");
		scanf(" %c", &letra);

		letra=tolower(letra);

		aux = 0;
		aux ++;

		for(i=0; i<x; i++){

			if(letra == Arreglo[i]){
				temp[i] = letra;
			}
			printf(" %c", temp[i]);
		}

		intento = intento + aux;
		printf("\n\nIntento #%d", intento);

		cont = cont - aux;

		if(strcmp(Arreglo, temp) == 0){

			printf("\n\n\tFELICIDADES!!\n\tHaz ganado\n");
			
			cont = 0;

		}
	else
		if(cont == 0 && temp != 0){

			printf("\n\n\tLa palabra era\n\t %s\n", Arreglo);
			printf("\n\n\tPERDISTE\n\t*n*\n");
		}


	}//llave del while



}//final de FuncArreglo	



int main(){

char cadena1[20]= "primer";
char cadena2[20]= "juego";
char cadena3[20]= "ahorcado";
char cadena4[20]= "reto";
char cadena5[20]= "alumnos";
char cadena6[20]= "plebe";
char cadena7[20]= "arriba";
char cadena8[20]= "salida";
char cadena9[20]= "perpendicular";
char cadena10[20]= "osea";
char cadena11[20]= "propiedad";
char cadena12[20]= "alto";
char cadena13[20]= "evidente";
char cadena14[20]= "amor";
char cadena15[20]= "entrada";
char cadena16[20]= "queso";
char cadena17[20]= "mio";
char cadena18[20]= "murcielago";
char cadena19[20]= "tamarindo";
char cadena20[20]= "super";
char cadena21[20]= "mariposa";
char cadena22[20]= "juana";
char cadena23[20]= "ixchel";
char cadena24[20]= "daniela";
char cadena25[20]= "jazmin";
char cadena26[20]= "diana";
char cadena27[20]= "diego";
char cadena28[20]= "laura";
char cadena29[20]= "cesar";
char cadena30[20]= "pancho";
char cadena31[20]= "cesartavo";




int x;
int i;			 //i es mi contador
char temp[100];
char palabra[100];
char letra;

int opcion = 0;


printf("*Bienvenidos al grandioso juego del \n\t AHORCADO \t\n\t en programacion en C*\n\n");

printf("\nINSTRUCCIONES: \nEscribe la letra que túas que corresponde a la palabra,\nsótienes 10 INTENTOS,\nusalos sabiamente.\n\n");


	srand(time(NULL)); //creacion de semilla
	
	opcion = rand() % 31; //Genera un numero aleatorio entre el 0 y el 3


printf("\nAdivina la siguiente palabra.\nPulsa ENTER para continuar.\n");

	getchar(); //espera hasta que des ENTER


	switch(opcion){
	
		case 0: 	
			FuncArreglo(cadena1);
			break;

		case 1:
			FuncArreglo(cadena2);
			break;

		case 2:
			FuncArreglo(cadena3);
			break;

		case 3:
			FuncArreglo(cadena4);
			break;
		
		case 4:
			FuncArreglo(cadena5);
			break;
		
		case 5:
			FuncArreglo(cadena6);
			break;
		case 6:
			FuncArreglo(cadena7);
			break;
		case 7:
			FuncArreglo(cadena8);
			break;
		case 8:
			FuncArreglo(cadena9);
			break;
		case 9:
			FuncArreglo(cadena10);
			break;
		case 10:
			FuncArreglo(cadena11);
			break;
		case 11:
			FuncArreglo(cadena12);
			break;
		case 12:
			FuncArreglo(cadena13);
			break;
		case 13:
			FuncArreglo(cadena14);
			break;
		case 14:
			FuncArreglo(cadena15);
			break;
		case 15:
			FuncArreglo(cadena16);
			break;
		case 16:
			FuncArreglo(cadena17);
			break;
		case 17:
			FuncArreglo(cadena18);
			break;
		case 18:
			FuncArreglo(cadena19);
			break;
		case 19:
			FuncArreglo(cadena20);
			break;
		case 20:
			FuncArreglo(cadena21);
			break;
		case 21:
			FuncArreglo(cadena22);
			break;
		case 22:
			FuncArreglo(cadena23);
			break;
		case 23:
			FuncArreglo(cadena24);
			break;
		case 24:
			FuncArreglo(cadena25);
			break;
		case 25:
			FuncArreglo(cadena26);
			break;
		case 26:
			FuncArreglo(cadena27);
			break;
		case 27:
			FuncArreglo(cadena28);
			break;
		case 28:
			FuncArreglo(cadena29);
			break;
		case 29:
			FuncArreglo(cadena30);
			break;
		case 30:
			FuncArreglo(cadena31);
			break;
		
		
		default: printf("\nERROR!!!\n");

	} //Fin del switch



} //Fin del Intmain
