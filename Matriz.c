//Matriz
//Archivos de cabecera
#include<stdio.h>

//Declaracion de constantes 
#define FIL 10
#define COL 10

//Prototipo de funciones
int menu();
void dim(int* , int* );
void datos(int [FIL][COL], int , int );
void ciclo(int [FIL][COL]);
void sumds(int [FIL][COL], int , int );
void show(int* );
void prom(int [FIL][COL], int , int );
void showp(int* );
void showma(int [FIL][COL], int , int);

//Funcion principal
void main(){
	int A[FIL][COL];
	ciclo(A);	
}

//Cuerpo de las funciones 
int menu(){
	int x;
	printf("\n");
	printf("\tMenu de la Matriz");
	printf("\n1) Introducir las dimensiones de la matriz");
	printf("\n2) Introducir datos de la matriz");
	printf("\n3) Suma de los elementos de la diagonal secundaria");
	printf("\n4) Producto de los elementos de la diagonal inferior");
	printf("\n5) Mostrar la Matriz");
	printf("\n6) Salir");
	printf("\n");
	printf("\nIntroduzca una opcion: ");
	scanf("%d",&x);
	return x;
}


void dim(int* fil, int* col){
	printf("\nIntroduzca el numero de filas de la matriz: ");
	scanf("%d",fil);
	printf("\nIntroduzca el numero de columnas de la matriz: ");
	scanf("%d",col);
}

void datos(int A[FIL][COL],int fil, int col){
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\nDato[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
}

void sumds(int A[FIL][COL], int fil, int col){
	int i,j,s=0;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(i+j== col-1)
			s+= A[i][j];
		}
	}
	 show(&s);
}
void show(int* s){
	printf("\nLa suma de los elementos de la diagonal seundaria es: %d",*s);
	printf("\n");
}

void prod(int A[FIL][COL], int fil, int col){
	int i,j,p=1;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(i>j)
			p*= A[i][j];
		}
	}
	showp(&p);
}

void showp(int* p){
	printf("\nEl producto de los elementos de la diagonal inferior es: %d",*p);
	printf("\n");
}

void showma(int A[FIL][COL], int fil, int col){
	int i,j;
	printf("\nLos datos de la matriz son");
	printf("\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\n matriz[%d][%d]= %d",i,j,A[i][j]);
		}
	}
	printf("\n");
}

void ciclo(int A[FIL][COL]){
	int fil,col,x;
	do{
	    x=menu();
		if(x==1){
			dim(&fil,&col);
		}
		else if(x==2){
			datos(A,fil,col);
		}
		else if(x==3){
			sumds(A,fil,col);
		}
		else if(x==4){
			prod(A,fil,col);
		}
		else if(x==5){
			showma(A,fil,col);
		}
	}while(x<6);
}
	

