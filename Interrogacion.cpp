/*Determinar si un numero es par o impar */

#include<stdio.h>

int main(void){
	int numero;
		printf("Ingrese un numero entero: ");
		scanf("%d",&numero);
		
	(numero%2==0) ? printf("\nEl numero es par") : printf("\nEl numero es impar");
	
	return 0;
}
