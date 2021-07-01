/* Cálculo del prerímetro de un triángulo */

//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de las funciones 
float datosEntradaA();
float datosEntradaB();
float datosEntradaC();
float calculoP(float, float, float, float, float, float);
void mostrarResul(float);

//Función principal
void main(){
	float a1,a2,b1,b2,c1,c2,sum;
	a1 = datosEntradaA();
	a2 = datosEntradaA();
	b1 = datosEntradaB();
	b2 = datosEntradaB();
	c1 = datosEntradaC();
	c2 = datosEntradaC();
	sum = calculoP(a1,a2,b1,b2,c1,c2);
	mostrarResul(sum);
	
}

//Cuerpos de las funciones 
float datosEntradaA(){
	float a;
	printf("Introduzca un punto en a: \n");
	scanf("%f",&a);
	return a;
}

float datosEntradaB(){
	float b;
	printf("Introduzca un punto en b: \n");
	scanf("%f",&b);
	return b;
}

float datosEntradaC(){
	float c;
	printf("Introduzca un punto en c: \n");
	scanf("%f",&c);
	return c;
}

float calculoP(float a1, float a2, float b1, float b2, float c1, float c2){
	float dAB,dBC,dCA,sum;
	dAB = sqrt(pow((a1 - b1),2) + pow((a2 - b2),2));
	dBC = sqrt(pow((b1 - c1),2) + pow((b2 - c2),2));
	dCA = sqrt(pow((c1 - a1),2) + pow((c2 - a2),2));
	sum = dAB + dBC + dCA;
	return sum;
	
}

void mostrarResul(float sum){
	printf("\nEl valor del perimetro del triangulo es: %f",sum);
	
}
