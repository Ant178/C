//Problema 2
//Archivos de cabecera
#include<stdio.h>

//Prototipo de funciones
void num(int* );
void vec(int* , int );
void eli(int* , int , int* , int* ,int* );
void show(int* , int* ,int , int);

//Declaracion de constantes
#define MAX 30

//Funcion principal
void main(){
	int n,nume[MAX],aux[MAX],b[MAX],contad=0;
	num(&n);
	vec(nume,n);
	eli(nume,n,aux,b,&contad);
	show(nume,b,n,contad);
	
}
//Cuerpo de las funciones
void num(int* n){
	printf("Introduzca el numero de elementos del vector: ");
	scanf("%d",n);
}

void vec(int* nume, int n){
	int i;
	printf("\nIngrese los elementos del vector");
	printf("\n");
	for(i=0;i<n;i++){
		printf("\nElemento[%d]: ",i+1);
		scanf("%d",&nume[i]);
	}
}

void eli(int* nume, int n, int* aux, int* b,int* contad){
	int i,l=0,k,num,j=0,cont=0;
	for(i=0;i<n;i++){
	cont=0;
	num= nume[i];
	aux[i]= num;
	j++;
	for(k=0;k<n;k++){
		if(aux[k]==num){
			cont+=1;
		}
	}
	if(cont==1){
		b[l]=num;
		l+=1;
		*contad+=1;
	}		
  }
}

void show(int* nume,int* b, int n, int contad){
	int i,j;
	printf("\nEl vector original es");
	for(i=0;i<n;i++){
		printf("\nElemento[%d]: %d",i+1,nume[i]);
	}
	printf("\n");
	printf("\nEl nuevo vector es");
	for(j=0;j<contad;j++){
		printf("\nElemento[%d]: %d",j+1,b[j]);
	}
}


