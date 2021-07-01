//Serie del polaco Stanislaw Ulam 
//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones 
void datosnum(int *);
void condicionales(int *);
void mostrarnume(int );
void mostrar(int );

//Funcion principal
void main(){
	int num;
	datosnum(&num);
	condicionales(&num);
}

//Cuerpo de las funciones
void datosnum(int *num){
	printf("Ingrese el valor inicial del numero entero: ");
	scanf("%d",*&num);
	
}

void condicionales(int *num){
	mostrarnume(*num);
	while(*num!=1){
		if(*num%2==0){
			*num = *num/2;
			mostrar(*num);
		}
		else{
			*num = (*num * 3) + 1;
			mostrar(*num);
		}
	
	}
}

void mostrarnume(int num){
	printf("%d, ",num);
}

void mostrar(int num){
	printf("%d, ",num);
}
