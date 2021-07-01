//Archivos de cabecera
#include<stdio.h>

//Prototipo de funciones
void datosEntrada(int* );
void array(float* , int );
void aprore(float* , int , int* , int*);
void prom(float* , int ,float* );
void show(int , int , float );

//Declaracion de constantes
#define MAX 50

//Funcion principal
void main(){
	int n,a=0,r=0;
	float notas[MAX],p;
	datosEntrada(&n);
	array(notas,n);
	aprore(notas,n,&a,&r);
	prom(notas,n,&p);
	show(a,r,p);
}

//Cuerpo de las funciones 
void datosEntrada(int* n){
	printf("Introduzca el numero de notas que desea evaluar: ");
	scanf("%d",n);
	
}

void array(float* notas, int n){
	int i;
	printf("\nIntroduzca las notas: ");
	printf("\n");
	for(i=0; i<n; i++){
		notas[i]=n;
		printf("\nNota[%d]: ",i+1);
		scanf("%f",&notas[i]);
}
}

void aprore(float* notas, int n, int* a, int* r){
	int i;
	for(i=0; i<n; i++){
		if(notas[i]>=6){
			*a+=1;
		}
		else
		*r+=1;	
    }
}

void prom(float* notas,int n,float* p){
	int i;
	float b=0;
	for(i=0; i<n; i++){
		b+= notas[i];
	}
	*p= b/n;
}

void show(int a, int r, float p){
	printf("\n");
	printf("\nUsted tiene %d nota(s) aprobada(s)",a);
	printf("\n");
	printf("\nUsted tiene %d nota(s) reprobada(s)",r);
	printf("\n");
	printf("\nSu promedio es de: %.2f",p);
}
