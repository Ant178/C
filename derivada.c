//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipos de funciones
 
float datosEntrada();
double calcularDeriv(float x);
void mostrarResul(double derivada);

//Funcion principal

void main(){
	float x; 
	double derivada;
	x = datosEntrada();
	derivada = calcularDeriv(x);
	mostrarResul(derivada);
}

//Cuerpo de las funciones 

float datosEntrada(void){
	float x;
	printf("Introduzca un valor para x:\t");
	scanf("%f",&x);
	return x;
}

double calcularDeriv(float x){
	double derivada;
	derivada = 4 * (pow(((pow(x,7))/7 + (sqrt(3) * pow(x,3))),3)) * (pow(x,6) + (3 * (pow(x,2)) * sqrt(3)));
	return derivada;
	
}

void mostrarResul(double derivada){
	printf("\nEl valor de x en la derivada es:\t%f",derivada);	
}
















