//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones
float datosEntradax(void);
float datosEntraday(void);
float pendiente(float px, float py, float qx, float qy);
float origen(float px, float py, float m);
void mostrarResul(float m, float b);

//Función principal
void main(){
	float px, qx, py, qy, m, b;
	px = datosEntradax();
	qx = datosEntradax();
	py = datosEntraday();
	qy = datosEntraday();
	m = pendiente(px, py, qx, qy);
	b = origen(px, py, m);
	mostrarResul(m, b);	
	}

//Cuerpo de las funciones
float datosEntradax(void){
	float x;
	printf("\nIntroduzca el valor de x:\t");
	scanf("%f",&x);
	return x;
	
}

float datosEntraday(void){
	float y;
	printf("\nIntroduzca el valor de y:\t"); 
	scanf("%f",&y);
	return y;
	
}

float pendiente(float px, float py, float qx, float qy){
	float m;
	m = (qy - py) / (qx - px);
	return m;
	
}

float origen(float px, float py, float m){
	float b;
	b = py - (m * px);
	return b;
}

void mostrarResul(float m, float b){
	printf("\nLa pendiente es:\t%.2f",m);
	printf("\nLa ordenada al origen es:\t%.1f",b);
	
}



























