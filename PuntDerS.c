/* Derivada simple */
//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
void datosEntrada(float *);
void derivada(float *, float *);
void mostrarResul(float *);

//Funcion principal
void main(){
	float x,der;
	datosEntrada(&x);
	derivada(&x, &der);
	mostrarResul(&der);
	
}
//Cuerpos de las funiones 
void datosEntrada(float *x){
	printf("Introduzca el valor de x: ");
	scanf("%f",*&x);
	
}

void derivada(float *x, float *der){
	*der = ((6 * pow(*x,2.0/3.0)) + (3 * pow(*x,1.0/6.0)) + 2)/((12 * pow(*x,2.0/3.0)) * (sqrt((*x + sqrt(*x) + pow(*x,1.0/3.0)))));
	                    
}

void mostrarResul(float *der){
	printf("\nEl valor de X evaluado en la derivada es: %f", *der);
	
}
