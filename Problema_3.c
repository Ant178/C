//Dado M numeros enteros por el teclado calcule lo siguiente 
//Archivos de cabecera
#include<stdio.h>

//Prototipo de funciones 
void datosEntrada(int *);
void calculo(int *);
void mostrarnum(int *);
void mostrarResul(int *, float *, float *);

//Funcion principal
void main(){
	int m;
	datosEntrada(&m);
	calculo(&m);
}
//Cuerpo de las funciones
void datosEntrada(int *m){
	printf("\nIngrese la cantidad de numeros que desea evaluar: ");
	scanf("%d",m);
	
}

void calculo(int *m){
	int z, nm;
	float pp, pg, c2=0,c3=0;
	int h=1,c1=0;
	while(h<=*m){
		mostrarnum(&z);
		if(z>0){
			c1+= 1;
			c2+= z;
			h+= 1;
		}
		else{
			c3+= z;
			h+= 1;
		}
	}
	nm = c1;
	pp = (c2/ c1);
	pg = (c3 + c2)/ *m;
	mostrarResul(&nm, &pp, &pg);
	
}

void mostrarnum(int *z){
	printf("\nIntroduzca el valor del numero entero: ");
	scanf("%d",z);
	
}

void mostrarResul(int *nm, float  *pp, float *pg){
	printf("\nNumeros mayores que 0: %d",*nm);
	printf("\nPromedio de los numeros positivos: %.1f",*pp);
	printf("\nEl promedio de todos los numeros es: %.1f",*pg);
}
