// Sumar 1-2+3-4...n

/*
impares (+)
pares (-)

suma_pares = -2-4-6...
suma_impares = 1+3+5...

suma = suma_pares + suma_impares

1-2+3-4+5-6
-1+3-4+5-6
2-4+5-6
-2+5-6
3-6
-3
*/

#include<stdio.h>

int main(){
	int n, cont, suma=0, suma_pares=0, suma_impares=0,ne;
	
	printf("Digite el total de elementos a sumar: ");
	scanf("%d",&n);
	
	cont = 1;
	
	while(cont<=n){
		if(cont%2==0){
			ne = cont * (-1);
			suma_pares += ne;
		}
		else{
			suma_impares += cont;
	}
		cont++;
	}
	suma = suma_pares + suma_impares;
	printf("\nLa suma total es: %d",suma);
	
	return 0;

}
