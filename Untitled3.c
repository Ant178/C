//Problema 5
//Archivos de cabecera 
#include<stdio.h>
#include<string.h>

//Declaracion de constantes 
#define FIL 10
#define COL 10

//Prototipo de funciones 
void R(int* , int* );
void rMtz(char [FIL][COL], int , int );
void show(char [FIL][COL], int , int );

//Funcion principal
void main(){
	char A[FIL][COL];
	int n,m;
	R(&n,&m);
	rMtz(A,n,m);
	
	show(A,n,m);
	
}

//Cuerpo de las funciones 
void R(int* n, int* m){
	printf("Introduzca el numero de filas\n");
	scanf("%d",n);
	printf("Introduzca el numero de columnas\n");
	scanf("%d",m);
}

void rMtz(char A[FIL][COL], int n, int m){
	int i,j;
	printf("\nIntroduzca los caracteres\n");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Caracter[%d][%d]: ",i+1,j+1);
			scanf("%s",&A[i][j]);
			}
	}
}

void show(char A[FIL][COL], int n, int m){
	int i,j;
	printf("\nDatos\n");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Caracter[%d][%d]: %c\n",i+1,j+1,A[i][j]);
		}
	}
}
