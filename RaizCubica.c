/*Valor de la derivada*/

//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
float datosEntrada();
float derivada(float);
void mostrarResul(float);

//Función principal 
void main(){
	float x,deriv;
	x = datosEntrada();
	deriv = derivada(x);
	mostrarResul(deriv);
	
}

//Cuerpo de las funciones
float datosEntrada(void){
	float x;
	printf("Ingrese el valor de x: ");
	scanf("%f",&x);
	return x;
	
}

float derivada(float x){
	float deriv;
	deriv = 2/(3 * (pow((2 * x + 4),2.0/3.0)));
	return deriv;
	
}

void mostrarResul(float deriv){
	printf("\nEl valor de X evaluado en la derivada es: %f",deriv);
	
}
