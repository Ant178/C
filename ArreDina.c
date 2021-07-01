//Arreglo bidimensional-dinámico 
//Archivos de cabecera 
#include<stdio.h>
#include<stdlib.h>

//Prototipo de funciones 
void darDimMtz(int* , int* );
int** crearMatriz(int fil, int col);
void darDatosMtz(int** , int , int );
void mostrarMtz(int** , int , int );
void liberarMtz(int** , int );

//Funcion principal
void main(){
	int fil,col, **mtz;
	
	darDimMtz(&fil,&col);
	mtz= crearMatriz(fil,col);
	darDatosMtz(mtz,fil,col);
	mostrarMtz(mtz,fil,col);
	liberarMtz(mtz,fil);
	
}

//Cuerpo de las funciones
void darDimMtz(int* fil, int* col){
	printf("Introduzca el numero de filas\n");
	scanf("%d",fil);
	printf("Introduzca el numero de columnas\n");
	scanf("%d",col);
}

int** crearMatriz(int fil, int col){
	int** mtz;
	int i;	
	mtz= (int**)malloc(fil * sizeof(int*));
	
	if(mtz==NULL){
		printf("No hay memoria disponible\n");
		exit(0);
	}
	for(i=0;i<fil;i++){
		mtz[i]= (int* )malloc(sizeof(int) * col);
	}
	
	return mtz;
}

void darDatosMtz(int** mtz, int fil, int col){
	int i,j;
	
	printf("Ingrese los datos de la Matriz\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Dato[%d][%d]: ",i+1,j+1);
			scanf("%d",&mtz[i][j]);
		}
	}
}


void mostrarMtz(int** mtz, int fil, int col){
	int i,j;
	
	printf("Los datos de la matriz son: \n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\t %d", mtz[i][j]);
			printf("\n");
		}
	}
}

void liberarMtz(int** mtz, int fil){
	int i;
	
	for(i=0;i<fil;i++)
		free(mtz[i]);	
	free(mtz);	
	
	printf("\nMemoria liberada\n");
}
