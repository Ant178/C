/* Componentes del vector A punteros */
//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Declaracion de constantes
#define PI 3.1416

//Prototipos de funciones 
void datosEntrada(float *, float *);
void calculoVec(float *, float *, float *, float *);
void mostrarResul(float *, float *);

//Función principal
void main(){
	float a,ang,ax,ay;
	datosEntrada(&a, &ang);
	calculoVec(&a, &ang, &ax, &ay);
	mostrarResul(&ax, &ay);
	
}

//Cuerpo de las funciones 
void datosEntrada(float *a, float *ang){
	printf("Introduzca el valor del vector A: ");
	scanf("%f",*&a);
	printf("\nIntroduzca el valor del angulo del vector: ");
	scanf("%f",*&ang);
	
}

void calculoVec(float *a, float *ang, float *ax, float*ay){
	*ax = *a * cos(((*ang * PI)/180));
	*ay = *a * sin(((*ang * PI)/180));
}

void mostrarResul(float *ax, float *ay){
	printf("\nEl valor de la componente en x es: %f",*ax);
	printf("\nEl valor de la componente en y es: %f",*ay);
	
}
