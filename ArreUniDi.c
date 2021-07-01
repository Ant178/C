//Arreglo unidimensional-dinamico
//Archivos de cabecera
#include<stdio.h>
#include<stdlib.h>

//Prototipo de funciones 
void darDim(int* );
int* crearArregloUni(int );
void darDatos(int* , int );
void mostrar(int* , int );
void liberar(int* );
void redimensionar(int* , int* );

//Funcion principal
void main(){
	int *A,elem;
	
	darDim(&elem);
	A= crearArregloUni(elem);
	printf("\n");
	darDatos(A,elem);
	printf("\n");
	mostrar(A,elem);
	printf("\n");
	redimensionar(A,&elem);
	printf("\n");
	liberar(A);
}

//Cuerpo de las funciones
void darDim(int* elem){
	printf("Indique la dimension del arreglo\n");
	scanf("%d",elem);
}

int* crearArregloUni(int elem){
	int* A;
	A= (int* )malloc(elem*sizeof(int));
	if(A==NULL){
		printf("No hay memoria disponible\n");
		exit(0);
	}
	return A;
}

void darDatos(int* A, int elem){
	int i;
	printf("Ingrese los datos del arreglo\n");
	for(i=0;i<elem;i++){
		printf("A[%d]: ",i+1);
		scanf("%d",&A[i]);
		printf("\n");
	}
}

void mostrar(int* A, int elem){
	int i;
	printf("Los datos del arreglo son\n");
	printf("\n");
	for(i=0;i<elem;i++){
		printf("A[%d]: %d\n",i+1,A[i]);
	printf("\n");
	}
}

void liberar(int* A){
	free(A);
	printf("Memoria liberada\n");
}

void redimensionar(int* A, int* elem){
	int i,n,nvotam,*B;
	printf("Cuantos elementos va agregar?\n");
	scanf("%d",&n);
	
	nvotam= (*elem) + n;
	B= (int* )realloc(A,nvotam * sizeof(int));
	
	for(i=(*elem);i<nvotam;i++){
		printf("\nA[%d]= ",i+1);
		scanf("%d",&B[i]);
	}
	(*elem)= nvotam;
	A=B;
}


