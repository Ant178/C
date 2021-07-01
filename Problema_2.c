//Numero de ventas N
//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones
void datosEntrada(int *);
void ventas(int *, int *, int *, int *, int *, float *);
void mostrarVe(float *);
void mostrarResul(int, int, int);

//Funcion principal 
void main(){
	int v,contv,contvMe,contvMi,contvMa;
	float vo;	
	contv = 1;
	contvMe = 0;
	contvMi = 0;
	contvMa = 0;
	
	datosEntrada(&v);
	ventas(&v, &contv, &contvMe, &contvMi, &contvMa, &vo);
	
}
//Cuerpo de las funciones
void datosEntrada(int *v){
	printf("Introduzca el numero de ventas que desea evaluar: ");
	scanf("%d",*&v);
	
}

void ventas(int *v, int *contv, int *contvMe, int *contvMi, int *contvMa, float *vo){
	while(*contv <= *v){
	 mostrarVe(vo);
		if(*vo<=200){
			*contvMe+= 1;
			 *contv+= 1;	
		}
		else if(*vo>200 && *vo<600){
			*contvMi+= 1;
			*contv += 1;
		}
		else{
			*contvMa += 1;
			*contv += 1;
		}
	}
	mostrarResul(*contvMe, *contvMi, * contvMa);
}

void mostrarVe(float *vo){
	printf("\nIntroduzca las ventas que obtuvo: ");
	scanf("%f",*&vo);

}

void mostrarResul(int contvMe, int contvMi, int contvMa){
	printf("\na) Numero de ventas menores o iguales a $200: %d",contvMe);
	printf("\nb) Numero de ventas mayores a $200 pero menores que $600: %d",contvMi);
	printf("\nc) Numero de ventas mayores a $600: %d",contvMa);
	
}
