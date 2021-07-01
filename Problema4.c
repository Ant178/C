/* Determinantes */
//Archivos de cabecera
#include<stdio.h>

//Prototipo de las funciones
void datosEntrada(float *, float *, float *, float *, float *, float *);
void calcu(float *, float *, float *, float *, float *, float *, float *, float *);
void mostrarResul(float *, float *);

//Funcion principal
void main(){
	float a,b,c,d,e,f,x,y;
	datosEntrada(&a, &b, &c, &d, &e, &f);
	calcu(&a, &b, &c, &d, &e, &f, &x, &y);
	mostrarResul(&x, &y);
	
}

//Cuerpo de las funciones 
void datosEntrada(float *a, float *b, float *c, float *d, float *e, float *f){
	printf("Introduzca el valor de la variable a: ");	
	scanf("%f",*&a);
	printf("\nIntroduzca el valor de la variable b: ");	
	scanf("%f",*&b);
	printf("\nIntroduzca el valor de la variable c: ");	
	scanf("%f",*&c);
	printf("\nIntroduzca el valor de la variable d: ");	
	scanf("%f",*&d);
	printf("\nIntroduzca el valor de la variable e: ");	
	scanf("%f",*&e);
	printf("\nIntroduzca el valor de la variable f: ");	
	scanf("%f",*&f);
	
}

void calcu(float *a, float *b, float *c, float *d, float *e, float *f, float *x, float *y){
*x = ((*c * *e) - (*f * *b))/((*a * *e) - (*d * *b));
*y = (*c - (*a * *x)) / (*b);
}

void mostrarResul(float *x, float *y){
	printf("\nEl valor de x es: %.f",*x);
	printf("\nEl valor de y es: %.f",*y);
	
} 
	

