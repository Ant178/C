//Archivo de cabecera
#include<stdio.h>

//Prototipos de funciones 
float calculaSuperficie(float radio);
float calculaLongitud(float);
void mostrarResul(float s,float l);
float datosEntrada(void);

//definici�n de constante
#define PI 3.1416

//funci�n principal 
void main(){
	float radio,s,l;
	
	radio = datosEntrada();
	s = calculaSuperficie(radio);
	l = calculaLongitud(radio);
	mostrarResul(s,l);

}

//Cuerpo de las funciones 
float calculaSuperficie(float radio){
	float s;
	s = PI * (radio * radio);
	return s;
}

float calculaLongitud(float radio){
	float l;
	l = 2 * PI * radio;
	return l;
}

float datosEntrada(void){
	float radio;
	printf("Introduzca el radio\n");
	scanf("%f",&radio);
	return radio;
}

void mostrarResul(float s, float l){
	printf("La superficie es: %f\n", s);
	printf("La longitud es: %f\n",l);
	
}
