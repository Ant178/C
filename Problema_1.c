//Problema 1
//Archivos de cabecera
#include<stdio.h>
#include<stdlib.h>

//Prototipo de funciones 
void num(int* , int* );
int** mtz(int , int );
int** mB(int , int );
void rel(int** , int , int );
void leematriz(int**, int , int );
void sumatoria(int** , int** , int , int);
void cero(int** , int , int );
void cero2(int** , int , int );
void impmatriz(int** , int** , int , int );

//Funcion principal
void main(){
	int n,m,**A,**B;
	num(&n,&m);
	A= mtz(n,m);
	B= mB(n,m);
	rel(A,n,m);
	leematriz(A,n,m);
	sumatoria(A,B,n,m);
	cero(B,n,m);
	cero2(B,n,m);
	impmatriz(A,B,n,m);		
}
//Cuerpo de las funciones 
void num(int* n, int* m){
	printf("Introduzca el numero de filas de la matriz\n");
	scanf("%d",n);
	printf("Introduzca el numero de columnas\n");
	scanf("%d",m);
}

int** mtz(int n, int m){
	int **mtz,i;
	
	mtz= (int**)malloc(sizeof(int*) * n);
	if(mtz==NULL){
		printf("\nNo hay memoria disponible\n");
		exit(0);
	}
	for(i=0;i<n;i++){
		mtz[i]= (int*)malloc(sizeof(int) * m);
	}
	return mtz;
}

int** mB(int n, int m){
	int i,**B;
	
	B= (int**)malloc(sizeof(int*) * n);
	if(B==NULL){
		printf("\nNo hay memoria disponible\n");
		exit(0);
	}
	for(i=0;i<n;i++){
		B[i]= (int*)malloc(sizeof(int) * m);
	}
	return B;
}

void rel(int** A, int n, int m){
	int i,j;
	printf("\nIntroduzca los datos de la matriz\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\nDato[%d][%d]: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	
}

void leematriz(int** A,int n,int m){
	int i,j;
	printf("\nMatriz A\n");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",A[i][j]);
	    }
	    printf("\n");
	}
}

void sumatoria(int**A, int**B, int n, int m){
	int i,j,h=0,k=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i>j){
				B[i][j]= (A[i][j] + A[j][i]);	
			}
		}
	}
}

void cero(int** B, int n, int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j){
				B[i][j]=0;
			}
		}
	}
}

void cero2(int** B, int n, int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i<j){
			B[i][j]=0;
			}
		}
	}
	
}

void impmatriz(int** A, int** B, int n, int m){
	int i,j;
	printf("\nMatriz A\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz B\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
}

