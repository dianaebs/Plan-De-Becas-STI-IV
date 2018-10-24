#include <stdio.h>
int main (){

int contador;
int numeros[5];


printf("ingrese seis numeros: \n");

for (contador = 0; contador <= 5; contador ++)

{

pintf("Ingrese  el enetero # %d: \n", contador++);
scanf("%d",&numeros[contador]); 
} 


printf("Sus numeros fueron:\n")	
for(contador = 0; contador <= 5; contador ++)  

{
 	printf("%d", numeros[contador]);
}

}
