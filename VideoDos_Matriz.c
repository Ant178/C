//Video segunda parte Matriz
//Archivos de cabecera
#include<stdio.h>
#include<stdlib.h>

//Prototipo de funciones 
void darDim(int* , int * );
int** crearmtz(int , int );
void datos(int** , int , int );
void mostrar(int** , int , int );
void liberar(int** , int );

//Funcion principal
void main(){
	int fil,col,**mtz;
	darDim(&fil,&col);
	mtz= crearmtz(fil,col);
	datos(mtz,fil,col);
	mostrar(mtz,fil,col);
	liberar(mtz,fil);
	
}

//Cuerpo de las funciones 
void darDim(int* fil, int* col){
	printf("Introduzca el numero de filas\n");
	scanf("%d",fil);
	printf("\nIntroduzca el numero de columna\n");
	scanf("%d",col);
}

int** crearmtz(int fil, int col){
	int i,**mtz;
	
	mtz= (int**)malloc(fil * sizeof(int*));
	if(mtz==NULL){
		printf("\nNo hay memoria disponible\n");
		exit(0);
	}
	
	for(i=0;i<fil;i++){
		mtz[i]= (int*)malloc(col * sizeof(int));
	}
	return mtz;
}

void datos(int** mtz, int fil, int col){
	int i,j;
	printf("\nIntroduce los datos de la matriz\n");
	printf("\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\nDato[%d][%d]: ",i+1,j+1);
			scanf("%d",&mtz[i][j]);
		}
	}
}

void mostrar(int** mtz, int fil, int col){
	int i,j;
	printf("\nDatos de la matriz\n");
	printf("\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\t %d",mtz[i][j]);
			printf("\n");
		}
	}
}

void liberar(int** mtz, int fil){
	int i;
	for(i=0;i<fil;i++){
		free(mtz[i]);
	}
	free(mtz);
	printf("\nFelicidades perro memoria liberada :) ");
}


