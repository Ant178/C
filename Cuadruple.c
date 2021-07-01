/* Haga un programa que obtenga el cuadruple de un número entero
proporcionado por el usuario */

//Archivo de cabecera
#include<stdio.h>

//Prototipos de funciones 
int datosEntrada(void);
int cuadrupleEnt(int num);
void mostrarResul(int cuadru);

//Función principal
void main(){
	int num,cuadru; 
	num = datosEntrada();
	cuadru = cuadrupleEnt(num);
	mostrarResul(cuadru);

}

//Cuerpo de las funciones

int datosEntrada(){
	int num;
	printf("Ingrese un numero entero:\t");
	scanf("%d",&num);
	return num;
}

int cuadrupleEnt(int num){
	int cuadru;
	cuadru = (num)*4;
	return cuadru;
}

void mostrarResul(int cuadru){
	
	printf("El cuadruple del numero es:\t%d",cuadru);
}












