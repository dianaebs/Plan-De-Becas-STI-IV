#include <stdio.h>
 	// TAREA 9
	/*Vocal-Consonante con SWITSCH*/

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
	
	print("La letra es una vocal\n",&letra);
	
	break;
	
	default:
	  printf("La letra es una consonante",&letra);

}
}


