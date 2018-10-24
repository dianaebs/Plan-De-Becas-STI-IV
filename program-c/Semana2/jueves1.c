#include <stdio.h>


int adicion(int x, int y){
			return (x + y);
			}
int sustraccion(int x, int y) {
			return (x - y);
				}
int division (int x, int y) {
			return (x / y);
			}
int multiplicacion (int x, int y) {
			return (x * y);
			}

		/*OPERACIONES*/

int main (){
	int c, a, b;
	printf("ingresa un numero: ");
	scanf("%d",&a);
	
	printf("ingrese otro numero: ");	
	scanf("%d",&b);

	c = adicion(a,b);
	printf("El resultado de la suma es: %d\n",c);
	
	c = sustraccion (a,b);
	printf("El resultado de la resta es: %d\n,c");

	c = division (a, b);
	printf("El resultado de sus division es: %d\n,c");
	
	c = multiplicacion (a,b);
	printf("El resultado de la multiplicacion es: %d\n, c");
	

	}


