/*Velocidad Final vf= vo + gt */

//Archivos de cabecera 
#include<stdio.h>

//Prototipos de funciones 
float datosVeloci();
float datosTiempo();
float velofinal(float, float);
void mostrarResul(float);

//Declaración de constantes
#define G 9.8

//Función principal
void main(){
	float vo,t,velo;
	vo = datosVeloci();
	t = datosTiempo();
	velo = velofinal(vo,t);
	mostrarResul(velo);
	
}

//Cuerpo de las funciones
float datosVeloci(void){
	float vo;
	printf("Introduzca la velocidad incial del objeto: ");
	scanf("%f",&vo);
	return vo;
	
}

float datosTiempo(void){
	float t;
	printf("\nIntroduzca el tiempo en el que tarda en caer el objeto: ");
	scanf("%f",&t);
	return t;
	
}

float velofinal(float vo, float t){
	float velo;
	velo = vo + (G * t);
	return velo;
}

void mostrarResul(float velo){
	printf("\nLa velocidad final del objeto es: %.2f",velo);
	
}

