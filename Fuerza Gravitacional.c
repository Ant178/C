//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de funciones
float datosEntrada();
float datosDist();
double calcularFg(float ma1, float ma2, float dis);
void mostrarResul(double f);

//Función principal
void main(){
	float ma1, ma2 , dis;
	double f;
	ma1 = datosEntrada();
	ma2 = datosEntrada();
	dis = datosDist();
	f = calcularFg(ma1, ma2, dis);
	mostrarResul(f);
}

//Cuerpo de las funciones

float datosEntrada(void){
	float m;
	printf("Introduzca la masa del cuerpo:\t");
	scanf("%f",&m);
	return m;
	
}

float datosDist(void){
	float dis;
	printf("Introduzca el valor de la distancia:\t");
	scanf("%f",&dis);
	return dis;
	
}

double calcularFg(float ma1, float ma2, float dis){
	int a;
	float b;
	double c, f;
	a = 10;
	b = 6.672;
	c = b * (pow(a,-11));
	f = (c * ma1 * ma2)/(pow(dis,2));
	return f;
	
}

void mostrarResul(double f){
	printf("La fuerza gravitacional es:\t%e",f);
	
}
















