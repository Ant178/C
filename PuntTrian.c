/* Los lados de un triángulo punteros*/

//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
void datosEntrada(float *, float *);
void hipotenusa(float *, float *, float *);
void mostrarResul(float *);

//Funcion principal
void main(){
	float a,b,c;
	datosEntrada(&a, &b);
	hipotenusa(&a, &b, &c);
	mostrarResul(&c);
	
}

//Cuerpo de las funciones 
void datosEntrada(float *a, float *b){
	printf("Introduzca el valor de a: \n");
	scanf("%f",*&a);
	printf("\nIntroduzca el valor de b: \n");
	scanf("%f",*&b);
	
}

void hipotenusa(float *a, float *b, float *c){
	*c = sqrt((pow(*a,2) + pow(*b,2)));
	
}

void mostrarResul(float *c){
	printf("\nLa hipotenusa deltriangulo es: %.2f",*c);
}
