/* Dado un triángulo realice un programa para hallar la hipotenusa c si 
los valores a y b que corresponden a los catetos proporcionados por el usuario */

//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipos de funciones
float datosEntrada();
float hipotenusa(float, float);
void mostrarResul(float);

//Función principal

void main(){
	float cat1,cat2,hip;
	cat1 = datosEntrada();
	cat2 = datosEntrada();
	hip = hipotenusa(cat1, cat2);
	mostrarResul(hip);
}

//Cuerpo de las funciones 

float datosEntrada(void){
	float cat;
	printf("Introduzca un valor para el cateto\n");
	scanf("%f",&cat);
	return cat;
	
}

float hipotenusa(float cat1, float cat2){
	float hip;
	hip = sqrt((pow(cat1,2) + pow(cat2,2)));
	return hip;
	
}

void mostrarResul(float hip){
	printf("\nEl valor de la hipotenusa es: %.2f",hip);
	
}
