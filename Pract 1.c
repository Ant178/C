//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipos de funciones
float DatosEntradaV(void);
float DatosEntradaI(void);
double conv(float g);
double componenHo(float r, float v);
double componenVe(float r, float v);
void mostrarResul(double ax, double ay);

//Declaración de constantes
#define PI 3.1416

//Función principal
void main(){
	float v, g, r, ax, ay;
	v = DatosEntradaV();
	g = DatosEntradaI();
	r = conv(g);
	ax = componenHo(r, v);
	ay = componenVe(r, v);
	mostrarResul(ax, ay);
}

//Cuerpo de las funciones 
float DatosEntradaV(void){
	float v;
	printf("Introduzca la magnitud del vector A:\t");
	scanf("%f",&v);
	return v;

}

float DatosEntradaI(void){
	float g;
	printf("Introduzca el angulo de inclinacion:\t");
	scanf("%f",&g);
	return g;

}

double conv(float g){
	double r;
	r = (g * PI) / 180;
	return r;
}

double componenHo(float r, float v){
	double ax;
	ax = v * (cos(r));
	return ax;
}

double componenVe(float r, float v){
	double ay;
	ay = v * (sin(r));
	return ay;
	
}

void mostrarResul(double ax, double ay){
	printf("\nEl resultado de la componente Ax es:\t%f",ax);
	printf("\nEl resultado de la componente Ay es:\t%f",ay);	
}

