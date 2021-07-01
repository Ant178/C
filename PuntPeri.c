/* Calculo del perimetro de un triangulo */
//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipo de funciones
void datosEntrada(float *, float *, float *, float *, float *, float *);
void perimetro(float *, float *, float *, float *, float *, float *, float *, float *, float *, float *);
void mostrarResul(float *);

//Función principal
void main(){
	float a1,a2,b1,b2,c1,c2,ab,bc,ca,sum;
	datosEntrada(&a1,&a2,&b1,&b2,&c1,&c2);
	perimetro(&a1,&a2,&b1,&b2,&c1,&c2,&ab,&bc, &ca,&sum);
	mostrarResul(&sum);
	
}

//Cuerpo de las funciones 
void datosEntrada(float *a1, float *a2, float *b1, float *b2, float *c1, float *c2){
	printf("Introduzca un valor para a: ");
	scanf("%f",*&a1);
	printf("\nIntroduzca un segundo valor para a: ");
	scanf("%f",*&a2);
	printf("\nIntroduzca un valor para b: ");
	scanf("%f",*&b1);
	printf("\nIntroduzca un segundo valor para b: ");
	scanf("%f",*&b2);
	printf("\nIntroduzca un valor para c: ");
	scanf("%f",*&c1);
	printf("\nIntroduzca un segundo valor para c: ");
	scanf("%f",*&c2);	
	
}

void perimetro(float *a1, float *a2, float *b1, float *b2, float *c1, float *c2,float *ab,float *bc,float *ca, float *sum){
	*ab = sqrt(pow((*b1 - *a1),2) + pow((*b2 - *a2),2));
	*bc = sqrt(pow((*c1 - *b1),2) + pow((*c2 - *b2),2));
	*ca = sqrt(pow((*a1 - *c1),2) + pow((*a2 - *c2),2));
	*sum = *ab + *bc + *ca;
	
}

void mostrarResul(float *sum){
	printf("\nEl perimetro del triangulo es: %f",*sum);
}
