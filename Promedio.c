//Archivos de cabecera
#include<stdio.h>

//Prototipo de funciones
void datosEntrada(float *, float *, float *);
void prom(float *, float *, float *, float *, float *, float *, float *);
void mostrarResul(float *);

//Función principal 
void main(){
	float n1,n2,n3,p1,p2,p3,sum;
	datosEntrada(&n1, &n2, &n3);
	prom(&n1, &n2, &n3, &p1, &p2, &p3, &sum);
	mostrarResul(&sum);
	
}

//Cuerpo de las funciones 
void datosEntrada(float *n1, float *n2, float *n3){
	printf("Ingrese la primera calificacion que obtuvo: ");
	scanf("%f",*&n1);
	printf("\nIngrese la segunda calificacion que obtuvo: ");
	scanf("%f",*&n2);
	printf("\nIngrese la ultima calificacion que obtuvo: ");
	scanf("%f",*&n3);
		
}

void prom(float *n1, float *n2, float *n3, float *p1, float *p2, float *p3, float *sum){
	*p1 = *n1 * .30;
	*p2 = *n2 * .30;
	*p3 = *n3 * .40;
	*sum = *p1 + *p2 + *p3;
	
}

void mostrarResul(float *sum){
	if(*sum>= 6){
		printf("\nAprobado ");
		
	}
	else{
		printf("\nReprobado");
		
	}
}
