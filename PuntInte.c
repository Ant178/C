/* Evaluar los limites a,b en la integral */
//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipo de funciones 
void datosEntrada(float *, float *);
void integral(float *, float *, float *, float *, float *);
void mostrarResul(float *);

//Declaracion de constantes
#define PI 3.1416

//Funcion principal
void main(){
	float a,b,a1,b1,inte;
	datosEntrada(&a, &b);
	integral(&a, &b, &a1, &b1, &inte);
	mostrarResul(&inte);
}

//Cuerpo de las funciones 
void datosEntrada(float *a, float *b){
	printf("Introduzca el valor del limite a: ");
	scanf("%f",*&a);
	printf("\nIntroduzca el valor del limite b: ");
	scanf("%f",*&b);
}

void integral(float *a, float *b, float *a1, float *b1, float *inte){
	*b1 = log(fabs(*b + 1)) - ((3/(2 * PI)) * sin((2 * PI * *b)));
	*a1 = log(fabs(*a + 1)) - ((3/(2 * PI)) * sin((2 * PI * *a)));
	*inte = *b1 - *a1;
}

void mostrarResul(float *inte){
	printf("\nEl valor de la integral definida es: %f", *inte);
}
