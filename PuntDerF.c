/* Derivada sencilla */
//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de funciones
void datosEntrada(float *);
void derivada(float *, float *);
void mostrarResul(float *);

//Funcion principal 
void main(){
	float x, der;
	datosEntrada(&x);
	derivada(&x, &der);
	mostrarResul(&der);
	
}
//Cuerpo de las funciones  
 void datosEntrada(float *x){
 	printf("Introduzca el valor de X: ");
 	scanf("%f",*&x);
 }

void derivada(float *x, float *der){
	*der = 2/(3 * pow(((2 * *x) + 4),2.0/3.0));
	
}

void mostrarResul(float *der){
	printf("\nEl valor de X evaluado en la derivada es: %f",*der);
	
}
