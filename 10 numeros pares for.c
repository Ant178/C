// Suma de los 10 primeros n�meros pares

#include<stdio.h>

int main(){
	int cont, suma=0;
	
	for(cont=0; cont <= 5; cont+=2){
		
		suma += cont;
	}
	
	printf("\nLa suma de los numeros pares es: %d",suma);
	
	return 0;
}
