//Archivo de cabecera
#include<stdio.h>

//Prototipos de funciones
float datosEntrada();
float media3(float num1, float num2, float num3);
void mostrarResul(float med);

//Función principal
void main(){
	float num1, num2, num3, med;
	num1 = datosEntrada();
	num2 = datosEntrada();
	num3 = datosEntrada();
	med = media3(num1, num2, num3);
	mostrarResul(med);
	
}

//Cuerpo de las funciones
float datosEntrada(){
	float num;
	printf("Introduzca un numero real:\t");
	scanf("%f",&num);
	return num;	
}

float media3(float num1, float num2, float num3){
	float med;
	med = (num1 + num2 + num3)/3;
	return med;
}

void mostrarResul(float med){
	printf("La media es:\t%f",med);		//No puse una restriccion en los decimales mostrados ya que pueden ser numeros grandes
}














