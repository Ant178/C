/* Valor de x en la derivada */ 

//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
float datosEntrada();
float derivada(float);
void mostrarResul(float);

//Función principal
void main(){
	float x,der;
	x = datosEntrada();
	der = derivada(x);
	mostrarResul(der);
	
}

//Cuerpo de las funciones
float datosEntrada(){
	float x;
	printf("Introduzca el valor de x: ");
	scanf("%f",&x);
	return x;
	
}

float derivada(float x){
	float der;
	der = ((6 * pow(x,2.0/3.0)) + (3 * pow(x,1.0/6.0)) + 2)/((12 * pow(x,2.0/3.0)) * sqrt(x + (sqrt(x)) + pow(x,1.0/3.0) ));                    
	return der;
}

void mostrarResul(float der){
	printf("\nEl valor de X evaluado en la derivada es: %f",der);
	
}
