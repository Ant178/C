/* Vector A */

//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Cuerpo de las funciones 
float datosEntrada();
float datoAngulo();
float componenteX(float, float);
float componenteY(float, float);
void mostrarResul(float, float);

//Función principal
void main(){
	float vec,ang,comx,comy;
	vec = datosEntrada();
	ang = datoAngulo();
	comx = componenteX(vec,ang);
	comy = componenteY(vec,ang);
	mostrarResul(comx,comy);
	
}

//Declaracion de constantes
#define PI 3.1416

//Cuerpo de las funciones 
float datosEntrada(void){
	float vec;
	printf("Ingrese el valor del vector A: ");
	scanf("%f",&vec);
	return vec;
	
}

float datoAngulo(void){
	float ang;
	printf("\nIngrese el valor del angulo: ");
	scanf("%f",&ang);
	return ang;
	
}

float componenteX(float vec, float ang){
	float comx, rad;
	rad = (PI * ang)/180;
	comx = vec * (cos(rad));
	return comx;
	
}

float componenteY(float vec, float ang){
	float comy, rad;
	rad = (PI * ang)/180;
	comy = vec * (sin(rad));
	return comy;
}

void mostrarResul(float comx, float comy){
	printf("\nLa componente horizontal del vector A es: %f",comx);
	printf("\nLa componente vertical del vector A es: %f",comy);
}


