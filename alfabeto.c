// Hacer un bucle do...while para imprimir las letras minúsculas del alfabeto

#include<stdio.h>

int main(){
	char letra = 'a'; //61h 62h 63h 64h
	
	do{
		printf("%c.\n",letra); //a b c d...
		letra++;
		
	}while(letra<='z');
	
	return 0;
}
