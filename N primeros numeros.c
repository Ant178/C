/* Suma de los n primeros números*/

#include<stdio.h>

int main(){
	int cont, n, suma=0;
	
	printf("Digite el total de numeros enteros a sumar: ");
	scanf("%d",&n);
	
	cont = 1;
	
	while(cont <= n){
		suma += cont;
		cont++;
		
	}
	
	printf("\nLa suma total es: %d",suma);
	
	return 0;
	
}

