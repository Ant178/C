/* Calcular la integral con los límites a,b */

//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
float datosEntradaA();
float datosEntradaB();
float calculoInte(float, float);
void mostrarResul(float);

//Declaracion de constantes
#define PI 3.1416

//Función principal
void main(){
	float a,b,inte;
	a = datosEntradaA();
	b = datosEntradaB();
	inte = calculoInte(a,b);
	mostrarResul(inte);	
	
}

//Cuerpo de las funciones 
float datosEntradaA(){
	float a;
	printf("\nIngrese el valor del limite a: ");
	scanf("%f",&a);
	return a;
	
}

float datosEntradaB(){
	float b;
	printf("\nIngrese el valor del limite b: ");
	scanf("%f",&b);
	return b;
	
}

float calculoInte(float a, float b){
	float b1, a1, inte;
	b1 = log((b + 1)) - ((3/(2*PI)) * sin(((2* PI * b ))));
	a1 = log((a + 1)) - ((3/(2*PI)) * sin(((2* PI * a ))));
	inte = b1 - a1;
	return inte;
	
}

void mostrarResul(float inte){
	printf("\nEl valor de la integral de acuerdo a los limites es: %f",inte);
}

