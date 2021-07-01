#include<stdio.h>
#define N 45


int main(){
	int num;
	
	printf("Digite un numero entero: ");
	scanf("%d",&num);
	
	if(num>=N){
		printf("\nEl numero esta dentro del rango de valores\n");
	}
	else{
		printf("\nEl numero que digito no esta en nuestro rango de valores\n");
	}
}
