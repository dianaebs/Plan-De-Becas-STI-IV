#include<stdio.h>
#include<string.h>

int main (){
char cadena1 [5]= "HOLA";
char cadena2 [5]= "ADIOS";
char cadena3 [ ]="ESTOS ES OTRA CADENA";
char cadena4 [40];

printf("cadena 4 contiene %s\n",cadena4);
strcpy(cadena4, cadena1);

printf("cadena 4 %s\n", cadena4);
strncpy(cadena4, cadena2,3);

printf("cadena 4 %s\n", cadena4);

printf(cadena concatenada %s\n, strcat(cadena1, cadena2));
printf(cadena 1 %s\n",cadena1);
printf(cadena 2 %s\n",cadena2);
printf(cadena concatenada %s\n",strncat(cadena1,cadena2,2));

printf(" Elnio de su cadena es %s\n", strlen(cadena1));
char CADENA1 [ ]="PALABRA";
char CADENA2 [ ]="PALABRA2";
printf("\n\n";

 

}


