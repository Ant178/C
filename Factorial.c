// Factorial de un número

#include<stdio.h>

int main(){
	int n,factorial=1,cont;
	
	printf("Digite un número para hallar su factorial: ");
	scanf("%d",&n);
	
	for(cont=1; cont<=n; cont++){
		factorial *= cont;
		
	}
	
	printf("\nEl factorial del numero dado es: %d",factorial);
	
	return 0;
}
