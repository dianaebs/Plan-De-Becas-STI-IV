#include <stdio.h>
 	// TAREA 9
	/*Vocal-Consonante con SWITCH*/

int main (){ 
char letra;

printf("Introduzca una letra:\n");
scanf("%c",&letra);


switch(letra)
	{
	case'A': 
	case'a':
	case'E': 
	case'e':
	case'I': 
	case'i':
	case'O': 
	case'o':
	case'U': 
	case'u':
	
	printf("La letra es una vocal%c\n",&letra);
	break;
	
	default:
		printf("La letra es una consonante\n",&letra);
	break;
}

}

