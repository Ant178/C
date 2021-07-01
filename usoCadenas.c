//Archivos de cabecera
#include<stdio.h>
#include<string.h>
#include<ctype.h>

//Protitipo de funciones
void Menu(char*);
int longi(char*);
int vocales(char*) ;
int mayusculas(char*);
int palindromo(char*);
void cadena(char*);
void inv(char*) ;

//Declaracion de constantes
#define MAX 50

//Funcion principal
int main(){
	char c[MAX];
	Menu(c);
}
//definicion de variables 
int entrada()
{
	int op;
	printf("\n");
	printf("\tOpciones de las cadenas");
	printf("\n1) Introducir una nueva cadena");
	printf("\n2) Invertir cadena");
	printf("\n3) Numero de vocales en la cadena");
	printf("\n4) Numero de mayusculas en la cadena");
	printf("\n5) Determinar si la cadena es un polindromo");
	printf("\n6) Determinar la longitud");
	printf("\n7) Finalizar programa");
	printf("\n");
	printf("\nIngrese una opcion: ");
	scanf("%d",&op);
	printf("\n");
	return op;
}
void cadena(char* c){
	printf("Introduce la cadena: ");
	scanf("%[^\n]",c);
	printf("\n");
	getchar();
}
void cambio(char* a,char* b){
	char tmp=*a;
	*a=*b;
	*b=tmp;
}
int longi(char* c){
	return strlen(c);
}
void inv(char* c)
{
	int n=longi(c),i=0,j=n-1;
	while(j!=i){
		if(j==i || j-1==i)
		break;
		cambio(&c[i],&c[j]);
		i++;
		j--;
	}
	if(n%2==0){
		cambio(&c[n/2-1],&c[n/2]);
	}
	printf("\nLa cadena invertida es: %s",c);
	printf("\n");
}
int vocales(char* c)
{
	int n=longi(c),i,h=0;
	for(i=0;i<n;i++){
	char a=tolower(c[i]); 
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u') 
	h++;
	}
	return h;
}
int mayusculas(char* c){
	int n=longi(c),i, f=0;
	for(i=0;i<n;i++) if(toupper(c[i])==c[i]) f++;
	return f;
}
int palindromo(char* c){
	char cd2[longi(c)+2];
	strcpy(cd2,c);
	inv(cd2);
	int r=strcmp(c,cd2);
	if(r==0){
		return 1;
	} 
	return 0;
}

void Menu(char* c)
{
	int n;
	do{
		n = entrada();
		getchar();
		if(n==1)
	    cadena(c);
		else if(n==2) 
		inv(c);
		else if(n==3){
		printf("\n");
		printf("\nEn la cadena hay %d vocales",vocales(c));
		printf("\n");
	    }
		else if(n==4){
		printf("\n");
		printf("\nMayusculas: %d",mayusculas(c));
		printf("\n");
	    }
		else if(n==5){
			if(palindromo(c)==1)
			 printf("\nLa cadena es un polindromo\n");
			else 
			printf("\nLa cadena no es un polindromo\n");
		}
		else if(n==6){
		printf("Longitud: %d",longi(c));
	    printf("\n");
		}
	}while(n<=6);
}

