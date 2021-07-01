//Arreglos dinamicos 
//Archivos de cabecera
#include<stdio.h>
#include<stdlib.h>

//Prototipo de funciones 
void darDim(int* );
int* creararray(int );
void datos(int* , int );
void mostrar(int* , int );
void liberar(int* );

//Funcion principal
void main(){
	int *A,n;
	darDim(&n);
	A= creararray(n);
	datos(A,n);
	mostrar(A,n);
	liberar(A);
}

//Cuerpo de las funciones 
void darDim(int* n){
	printf("Introduzca el numero de casillas\n");
	scanf("%d",n);
}

int* creararray(int n){
	int* A;
	A= (int*)malloc(n * sizeof(int));
	if(A==NULL){
		printf("\nNo hay memoria disonible\n");
		exit(0);
	}
	return A;
}

void datos(int* A, int n){
	int i;
	printf("\nIngrese los datos del arreglo\n");
	for(i=0;i<n;i++){
		printf("\nDato[%d]: ",i+1);
		scanf("%d",&A[i]);
	}
}

void mostrar(int* A, int n){
	int i;
	printf("\nLos datos son\n");
	for(i=0;i<n;i++){
		printf("\nDato[%d]: %d\n",i+1,A[i]);
	}
}

void liberar(int* A){
	free(A);
	printf("\n");
	printf("\nMemoria liberada");
}
