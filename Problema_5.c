//Calcular la serie
//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipo de funciones
void datosEntrada(int *);
void calculo(int *, int *, int *, float *);
void mostrarac(float );

//Funcion principal
void main(){
	int n,h,contk;
	float acum;
	n = 0;
	h = 0;
	contk = 1;
	datosEntrada(&n);
	calculo(&n, &h, &contk, &acum);

}

//Cuerpo de las funciones
void datosEntrada(int *n){
	printf("Introduzca un numero mayor que 0 que desee evaluar: ");
	scanf("%d",*&n);
	
}

void calculo(int *n, int *h, int *contk, float *acum){
	if(*n>0){
		*h = *n * 2;
		while(*contk <= *h){
			int r=-1;
			*acum = *acum + ((pow(r,(*contk+1)))/ *contk);
			*contk+=1;
		}
		mostrarac(*acum);
		
	}
	else{
		printf("\nEl numero entero no es mayor que 0");
	}
}

void mostrarac(float acum){
	printf("\nEl valor de la sumatoria de acuerdo al valor dado es: %.4f",acum);
}

