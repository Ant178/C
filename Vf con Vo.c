//Archivos de cabecera 
#include<stdio.h>

//Prototipos de funciones 
float datosEntrada();
float segundaEntrada();
float calcularVf(float imp, float seg);
void mostrarResul(float velo);

//Declaración de constante 
#define g 9.81

//Función principal
void main(){
	float imp, seg, velo;
	imp = datosEntrada();
	seg = segundaEntrada();
	velo = calcularVf(imp, seg);
	mostrarResul(velo);
}

//Cuerpo de las funciones 

float datosEntrada(void){
	float imp;
	printf("Introduzca la velocidad inicial del objeto:\t");
	scanf("%f", &imp);
	return imp;
	
}

float segundaEntrada(void){
	float seg;
	printf("Introduzca el tiempo en el que tarda en caer el objeto:\t");
	scanf("%f", &seg);
	return seg;
	
}

float calcularVf(float imp, float seg){
	float velo;
	velo = imp + g * seg;
	return velo;
}

void mostrarResul(float velo){
	printf("La velocidad final del objeto es:\t%.3f",velo);
	
}


