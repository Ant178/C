/* Area de un triángulo */
//Archivos de cabecera
#include<stdio.h>
#include<math.h>

//Prototipo de funciones
void datosEntrada(float *, float *, float *);
void areaT(float *, float *, float *, float *, float *);
void mostrarResul(float *);

//Funcion principal 
void main(){
	float a,b,c,p,are;
	datosEntrada(&a, &b, &c);
	areaT(&a, &b, &c, &p, &are);
	mostrarResul(&are);
	
}

//Cuerpo de las funciones 
void datosEntrada(float *a, float *b, float *c){
	printf("Introduzca el primer valor del lado del triangulo: ");
	scanf("%f",*&a);
	printf("\nIntroduzca el segundo valor del lado del triangulo: ");
	scanf("%f",*&b);
	printf("\nIntroduzca el tercer valor del lado del triangulo: ");
	scanf("%f",*&c);
	
}

void areaT(float *a, float *b, float *c, float *p, float *are){
	*p = (*a + *b + *c)/2;
	*are = sqrt((*p * (*p - *a) * (*p - *b) * (*p - *c)));
	
}
void mostrarResul(float *are){
	printf("\nEl area del triangulo es: %f",*are);
}
