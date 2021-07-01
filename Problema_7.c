//Dado un numero entero determinar la suma de sus digitos 
//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones
void datosEntrada(int *);
void calculo(int *, int *, int *);
void mostrarResul(int *);

//Funcion principal
void main(){
	int n,r,s;
	datosEntrada(&n);
	calculo(&n, &r, &s);
	mostrarResul(&s);
	
}
//Cuerpo de las funciones 
void datosEntrada(int *n){
	printf("Introduzca un numero entero: ");
	scanf("%d",*&n);
	
}

void calculo(int *n, int *r, int *s){
	while(*n!=0){
		*r = *n%10;
		*n/= 10;
		*s+= *r;
	}
}

void mostrarResul(int *s){
	printf("\nLa suma de los digitos del numero es: %d",*s);
	
}
