//Problema 1
#include<stdio.h>

//Prototipo de funciones
void menu();
void ele(int *);
void casos(int *);
void funwhi();
void mostrarfwh(int);
void fundo_w();
void mostrarfund(int);
void funfo();
void mostrarfo(int);

//Funcion principal 
void main(){
	int o;
	menu();
	ele(&o);
	casos(&o);
}
//Cuerpo de las funciones
void menu(){
	printf("\tEstructuras repetitivas\n");
	printf("\n1) While");
	printf("\n2) Do-While");
	printf("\n3) For\n");
	
}
void ele(int *o){
	printf("\nEliga una opcion para resolver el problema\n");
	scanf("%d",*&o);
	
}

void casos(int *o){
	switch(*o){
		case 1: funwhi();
				break;
		case 2: fundo_w();
				break;
		case 3: funfo();
				break;
		
	}
}

void funwhi(){
	int t=10,acm=0;
	while(t<=100){
		acm+= t;
		t+=5;
	}
	mostrarfwh(acm);
}
 
void mostrarfwh(int acm){
	printf("\nLa suma de los multiplos de 5 es: %d",acm);
	
} 

void fundo_w(){
	int t=10,acm=0;
	do{
		printf("\nLos multiplos de 5 son: %d\t",t);
		acm+= t;
		t+=5;
	}while(t<=100);
	
	mostrarfund(acm);
		
}

void mostrarfund(int acm){
	printf("\nLa suma de los multiplos de 5 es: %d",acm);
}

void funfo(){
	int t=10,acm=0;
	for(t=10; t<=100; t+=5){
		acm+=t;
	}
			mostrarfo(acm);

}

void mostrarfo(int acm){
	printf("\nLa suma de los multiplos de 5 es: %d",acm);
}


