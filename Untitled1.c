#include<stdio.h>
#include<stdlib.h>

void Integrar(void);
void Derivar(void);
void menu(void);

void main( ){
       menu( );
}

void menu( ){
  char opc;
  printf(" 1.- Derivar \n");
  printf(" 2.- Integrar \n");
  printf(" 3.- Salir  \n");
  printf("Elija una opcion\n");
  scanf("%c", &opc);       
  switch( opc ){
       case 'D': Derivar( );
                 break;
	  case 'I':
	  case 'i': Integrar( );
	            break;
	  case 's': exit(0); // forza al programa a
				  // terminar
	  default: printf("Opcion no valida\n");  
      }
   	  printf(" Hasta proto \n");
}

void Derivar( ){
  printf(" Funcion Derivar\n");
}
void Integrar( ){
  printf(" Funcion  Integrar\n");
}
