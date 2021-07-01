//Problema 4
//Archivos de cabecera
#include<stdio.h>
#include<string.h>
#include<math.h>

//Declaracion de constantes 
#define FIL 10
#define COL 10

//Prototipo de funciones 
void mtz(int* , int* );
void rMtz(char [FIL][COL], int , int );
void tmp(char [FIL][COL], char [FIL][COL], int , int );

//Funcion principal 
void main(){
	int n,m;
	char A[FIL][COL],B[FIL][COL];
	mtz(&n,&m);
	rMtz(A,n,m);
	tmp(A,B,n,m);
	
}
//Cuerpo de las funciones 
void mtz(int* n, int* m){
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


void tmp(char A[FIL][COL],char B[FIL][COL], int n, int m){
	int i,j,s,t,a,b,o,q,w,e;
	s= 2*n;
	t= 2*m;
	for(i=0;i<s;i++){
		for(j=0;j<t;j++){
			B[i][j]= '0';
		}
	}
	for(a=0;a<n;a++){
		for(b=m,o=0;b<t;b++,o++){
		B[a][b]= A[a][o];
		}
    }
    
    for(q=n,e=0;q<s;q++,e++){
    	for(w=0;w<m;w++){
    		B[q][w]= A[e][w];
    	}
    }
	printf("\n");
	printf("La matriz resultante es\n");
	printf("\n");
	for(i=0;i<s;i++){
		for(j=0;j<t;j++){
			printf("%c ",B[i][j]);
		}
		printf("\n");
	}
}


