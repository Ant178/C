//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones
void darNumElem(int* );
void insertaDatos(int* , int);
void mostrar(int* , int );
void pideNumBuscar(int* );
void busquedaLineal(int* , int , int );
void ordenaBurbuja(int* , int );
void mostrar2(int* , int );
void pideNumBuscar2(int* );
int busquedaBinaria(int* , int , int );

//Declaracion de constantes 
#define TAM 50

//Funcion principal
void main(){
	int n,elem,clave,b;
	int numero[TAM];
	darNumElem(&n);
	insertaDatos(numero,n);
	mostrar(numero,n);
	pideNumBuscar(&elem);
	busquedaLineal(numero,n,elem);
	ordenaBurbuja(numero,n);
	mostrar2(numero,n);
	pideNumBuscar2(&clave);
	b=busquedaBinaria(numero,n,clave);
	if(b<=n){
	printf("La posicion es: %d",b);
	}
	
}
//Cuerpo de las funciones
void darNumElem(int* n){
	printf("¿Cuantos elementos quiere introducir?: ");
	scanf("%d",n);
	
}

void insertaDatos(int* numero,int n){
	int i;
	printf("\nIntroduzca los datos\n");
	for(i=0; i<n; i++){
		printf("\nElemnto[%d]: ",i+1);
		scanf("%d",&numero[i]);
	}
	
}

void mostrar(int* numero, int n){
	int i;
	printf("\nLos elementos son\n");
	for(i=0; i<n; i++){
		printf("Dato[%d]= %d\n",i+1,numero[i]);
	}
}

void pideNumBuscar(int* elem){
	printf("\nIntroduzca el numero a buscar: ");
	scanf("%d",elem);
	
}

void busquedaLineal(int* numero, int n, int elem){
	int i;
	for(i=0; i<n; i++){
		if(elem==numero[i]){
			printf("\nLa posicion del elemento es: %d",i+1);
			break;
		}
	}
	if(i==n)
		printf("\nEl elemento no se encuentra en el arreglo");
}

void ordenaBurbuja(int* numero, int n){
	int i,j,temp;
	for(j=0; j<n; j++){
		for(i=0; i<n-1; i++){
			if(numero[i]> numero[i+1]){
				temp= numero[i];
				numero[i]= numero[i+1];
				numero[i+1]=temp;
			}
		}
	}
	
}

void mostrar2(int* numero,int n){
	int i;
	printf("\n");
	printf("\nLos elementos son\n");
	for(i=0; i<n; i++){
		printf("Dato[%d]= %d\n",i+1,numero[i]);
	}
}

void pideNumBuscar2(int* clave){
	printf("\n");
	printf("\nIntroduzca el numero a buscar: ");
	scanf("%d",clave);
	
}

int busquedaBinaria(int* numero, int n, int clave){
	int izq,der,central;
	izq=0;
	der=n-1;
	while(izq<=der){
		central=(izq+der)/2;
		if(clave==numero[central])
		 return central;
		else if(clave>numero[central])
		 izq= central+1;
		 else
		 der=central-1;
	}
	return -1;
}
