/* Velocidad final de un objeto en caida libre */ 
//Archivos de cabecera
#include<stdio.h>

//Prototipos de funciones
void datosEntrada(float *, float *);
void velocidadF(float *, float *, float *);
void mostrarResul(float *);

//Declaracion de constantes
#define G 9.8

//Función principal
void main(){
	float vo,t,vf;
	datosEntrada(&vo, &t);
	velocidadF(&vo, &t, &vf);
	mostrarResul(&vf);
	
}

//Cuerpo de las funciones
void datosEntrada(float *vo, float *t){
	printf("Introduzca la velocidad incial del objeto: ");
	scanf("%f",*&vo);
	printf("\nIntroduzca el tiempo en el que tarda en caer el objeto: ");
	scanf("%f",*&t);
	
}

void velocidadF(float *vo, float *t, float *vf){
	*vf = *vo + G * *t;
}

void mostrarResul(float *vf){
	printf("\nLa velocidad final del objeto es: %.2f",*vf);
}
