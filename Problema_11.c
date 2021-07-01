//N notas de un estudiante calcular lo que se pide 
//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones 
void datosEntrada(int *);
void calcular(int *, float *);
void mostrarno(float *);
void mostrar(int *, int *, float *, float *, float *);

//Funcion principal
void main(){
	int n;
	float o;
	datosEntrada(&n);
	calcular(&n, &o);
	
}

//Cuerpo de las funciones 
void datosEntrada(int *n){
	printf("Ingrese la cantidad de notas que desea calcular: ");
	scanf("%d",n);

}

void calcular(int *n, float *o){
	int contx=1,conta=0,contr=0;
	float contp=0,contn=0,prom,proma,promr;
	contx = 1;
	while(contx <= *n){
		    mostrarno(o);
			 if(*o>=6){
				conta+= 1;
				contp+= *o;
				contx += 1;
			}
			 else{
				contr+= 1;
				contn+= *o;
				contx += 1;
			}
	}
	
		prom = (contp + contn)/ *n;
		proma = contp/conta;
		promr = contn/contr;
		
		mostrar(&contr, &conta, &prom, &proma, &promr);		
}

void mostrarno(float *o){
	printf("\nIntroduzca la calificacion de la nota: ");
	scanf("%f",o);
}

void mostrar(int *contr, int *conta, float *prom, float *proma, float *promr){
	printf("\na) Usted tiene %d notas reprobadas",*contr);
	printf("\nb) Usted tiene %d notas aprobadas",*conta);
	printf("\nc) El promedio de sus notas es: %.2f", *prom);
	printf("\nd) El promedio de sus notas aprobadas es: %.2f y el promedio de sus notas reprobadas es: %.2f",*proma,*promr);
}
