//Calcular el valor de x
//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipo de funciones
void datosEntrada(float *, float *, int *);
void calculo(float *, float *, int *);
void mostrarResul(float *);



//Funcion principal
void main(){
	float a,b,x;
	int n;
	datosEntrada(&a, &b, &n);
	calculo(&a, &b, &n);
}

//Cuerpo de las funciones 
void datosEntrada(float *a, float *b, int *n){
	printf("Introduzca el valor de a: ");
	scanf("%f",a);
	printf("\nIntroduzca el valor de b: ");
	scanf("%f",b);
	printf("\nIntroduzca el valor de n: ");
	scanf("%d",n);
	
}

void calculo(float *a, float *b, int *n){
	float c,s,x,res,resu, p, q;
	p = 0;
	q = 1;
	c= *a - *b;
	s = *n-1;
	int contx,conty;
	for(contx=1; contx <= *n; contx+=1){
		res = (pow((c),contx) -3) + *n;
		p += res;
	}
	
	for(conty=2; conty <= s; conty+=1){
		resu = (2 + (*a * (conty - 1)));
		q *= resu;
	}
	
	x=(p/q);
	
	mostrarResul(&x);
}

void mostrarResul(float *x){
	printf("\nEl resultado es: %f",*x);
}
