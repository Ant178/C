//Suma de la serie 
//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipo de funciones
void datosEntrada(int *);
void calculo(int *);
void mostrarResul();
void mostrarResul(float *);

//Funcion principal
void main(){
	int n;
	datosEntrada(&n);
	calculo(&n);
}
//Cuerpo de las funciones 
void datosEntrada(int *n){
	printf("Introduzca la cantidad de terminos que va a tener la serie: ");
	scanf("%d",n);

}

void calculo(int *n){
	int cont;
	float a=0;
	for(cont=1; cont<=*n; cont++){
		a+=(cont/(pow(2,cont)));
		printf("%d/2**%d + ",cont, cont);
	}

	mostrarResul(&a);
	
}

void mostrarResul(float *a){
	printf("\nEl resultado de la suma es: %f",*a);
	
}
