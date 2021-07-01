//Serie de numeros reales 
//Archivos de cabecera 
#include<stdio.h>
#include<stdlib.h>

//Prototipo de funciones 
void entrada();
void calculo();
void dato(int *);
void mostrar(float *, float *, int *, int *);
void mostrarResul(float *);

//Funcion principal 
void main(){
	entrada();
	calculo();
}

//Cuerpo de las funciones
void entrada(){
	printf("\tIntroduzca el numero real que desea sumar y cuando quiera terminar la serie introduzca el digito 0\n");
}

void calculo(){
	int a=0,b=1,n;
	float x=0, r;
	do{
		dato(&n);
		switch(n){
			case 1: mostrar(&r, &x, &a, &b);
					break;
			case 0: mostrarResul(&x);
					exit(0);
		}
	}while(a!=b);
}

void dato(int *n){
	printf("\n¿Desea ingresar un dato? escriba 1 para si y 0 para no: ");
	scanf("%d",n);
}

void mostrar(float *r, float *x, int *a, int *b){
	printf("\nIngrese el numero real que desea sumar: ");
	scanf("%f",r);
	*x+= *r;
	*a+= 1;
	*b+= 1;
	
}

void mostrarResul(float *x){
	printf("\nLa suma total de acuerdo a los numeros proporcionados es: %.2f",*x);
}
