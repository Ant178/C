//Arreglos
//Archivos de cabecera
#include<stdio.h>

//Prototipo de funciones
void datosEntrada(int*);
void ciclo(int*, int);


//Declaracion de variables
#define MAX 10


//Funcion principal
void main(){
	int n,numero[MAX];
	datosEntrada(&n);
	ciclo(numero,n);
}

//Cuerpo de las funciones
void datosEntrada(int* n){
	printf("Ingrese el numero de elementos: ");
	scanf("%d",n);
}

void ciclo(int* numero, int n){
	int i;
	for(i=0; i<n; i++){
		printf("\nElemento[%d]:",i+1);
		scanf("%d",&numero[i]);
	}
}
