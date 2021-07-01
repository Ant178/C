/* Múltiplos de 5 desde 1 hasta n */

#include<stdio.h>

int main(){
	int cont, n;
	
	printf("Digite el total de numeros a comprobar: ");
	scanf("%d",&n);
	
	cont = 1;
	
	while(cont <= n){
		if(cont%5==0){
			printf("%d\n",cont);
		}
		cont++;
	}
	
	
}

