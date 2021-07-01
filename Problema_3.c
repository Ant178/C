//Problema 3
//Archivos de cabecera
#include<stdio.h>
#include<string.h>

//Prototipo de funciones 
void cadena(char* , char* );
void copiar(char* , char* );
void cal(char *, char *);
void show(char* , char* ,char* );

//Declaracion de constantes 
#define MAX 50

void main(){
	char A[MAX], B[MAX], C[MAX];
	cadena(A,B);
	copiar(C,B);
	cal(A,B);
	printf("\n");
	show(A,B,C);
	
}
 void cadena(char* A,char* B){
 	printf("Introduzca la primera cadena\n");
 	scanf("%[^\n]",A);
 	getchar();
 	printf("\nIntroduce la segunda cadena\n");
 	scanf("%[^\n]",B);
 }
 
 void copiar(char* C, char* B){
 	strcpy(C,B);
 }
 
 void cal(char* A, char* B){
 	int s,r,i,h,k,ca,ce,ci,co,cu,ca1,ce1,ci1,co1,cu1;
 	ca=ce=ci=co=cu=ca1=ce1=ci1=co1=cu1=0;
 	s= strlen(A);
 	r= strlen(B);
 	for(i=0;i<s;i++){
 		if(A[i]=='A'||A[i]=='a')
		 ca+=1;
		else if(A[i]=='E'||A[i]=='e')
		 ce+=1;
		else if(A[i]=='I'||A[i]=='i')
		 ci+=1;
		else if(A[i]=='O'||A[i]=='o')
		 co+=1;
		else if(A[i]=='U'||A[i]=='u')
		 cu+=1;		
 		}
 		
 	for(i=0;i<r;i++){
 		if(B[i]=='A'||B[i]=='a')
		 ca1+=1;
		if(B[i]=='E'||B[i]=='e')
		 ce1+=1;
		if(B[i]=='I'||B[i]=='i')
		 ci1+=1;
		if(B[i]=='O'||B[i]=='o')
		 co1+=1;
		if(B[i]=='U'||B[i]=='u')
		 cu1+=1;		
 		}
 		
 	if(ca>ce && ca>ci && ca>co && ca>cu)
 		h=0;	
 	if(ce>ca && ce>ci && ce>co && ce>cu)
 		h=1;
 	if(ci>ca && ci>ce && ci>co && ci>cu)
 		h=2;
 	if(co>ca && co>ce && co>ci && co>cu)
 		h=3;
 	if(cu>ca && cu>ce && cu>ci && cu>co)
 		h=4;
 	if(ca1>ce1 && ca1>ci1 && ca1>co1 && ca1>cu1)
 		k=0;	
 	if(ce1>ca1 && ce1>ci1 && ce1>co1 && ce1>cu1)
 		k=1;
 	if(ci1>ca1 && ci1>ce1 && ci1>co1 && ci1>cu1)
 		k=2;
 	if(co1>ca1 && co1>ce1 && co1>ci1 && co1>cu1)
 		k=3;
 	if(cu1>ca1 && cu1>ce1 && cu1>ci1 && cu1>co1)
 		k=4;
 	
 	if(h==0 && k!=0){
 		switch(k){
 			case 1:
 			       for(i=0;i<r;i++){
 				   if(B[i]=='E' || B[i]=='e')
 				   B[i]='A';
 			        }
 					break;
 			case 2:
 					for(i=0;i<r;i++){
 					if(B[i]=='I' || B[i]=='i')
 					B[i]='A';
 					}
 					break;
 			case 3:
 					for(i=0;i<r;i++){
 					if(B[i]=='O' || B[i]=='o')
 					B[i]='A';
 					}
 					break;
 			case 4:
 					for(i=0;i<r;i++){
 					if(B[i]=='U' || B[i]=='u')
 					B[i]='A';
 					}
 					break;
 		}
 	}
 	else if(h==1 && k!=1){
 		switch(k){
 			case 0:
 					for(i=0;i<r;i++){
 					if(B[i]=='A' || B[i]=='a')
 					B[i]='E';
 					}
 					break;
 			case 2:
 					for(i=0;i<r;i++){
 					if(B[i]=='I' || B[i]=='i')
 					B[i]='E';
 					}
 					break;
 			case 3:
 					for(i=0;i<r;i++){
 					if(B[i]=='O' || B[i]=='o')
 					B[i]='E';
 					}
 					break;
 			case 4:
 					for(i=0;i<r;i++){
 					if(B[i]=='U' || B[i]=='u')
 					B[i]='E';
 					}
 					break;
 		}
 	}
 	else if(h==2 && k!=2){
 		switch(k){
 			case 0:
 					for(i=0;i<r;i++){
 					if(B[i]=='A' || B[i]=='a')
 					B[i]='I';
 					}
 					break;
 			case 1:
 					for(i=0;i<r;i++){
 					if(B[i]=='E' || B[i]=='e')
 					B[i]='I';
 					}
 					break;
 			case 3:
 					for(i=0;i<r;i++){
 					if(B[i]=='O' || B[i]=='o')
 					B[i]='I';
 					}
 					break;
 			case 4:
 					for(i=0;i<r;i++){
 					if(B[i]=='U' || B[i]=='u')
 					B[i]='I';
 					}
 					break;
 		}
 	}
 	else if(h==3 && k!=3){
 		switch(k){
 			case 0:
 					for(i=0;i<r;i++){
 					if(B[i]=='A' || B[i]=='a')
 					B[i]='O';
 					}
 					break;
 			case 1:
 					for(i=0;i<r;i++){
 					if(B[i]=='E' || B[i]=='e')
 					B[i]='O';
 					}
 					break;
 			case 2:
 					for(i=0;i<r;i++){
 					if(B[i]=='I' || B[i]=='i')
 					B[i]='O';
 					}
 					break;
 			case 4:
 					for(i=0;i<r;i++){
 					if(B[i]=='U' || B[i]=='u')
 					B[i]='O';
 					}
 					break;
 		}
 	}
 	else if(h==4 && k!=4){
 		switch(k){
 			case 0:
 					for(i=0;i<r;i++){
 					if(B[i]=='A' || B[i] == 'a')
 					B[i]='U';
 					}
 					break;
 			case 1:
 					for(i=0;i<r;i++){
 					if(B[i]=='E' || B[i]=='e')
 					B[i]='U';
 					}
 					break;
 			case 2:
 					for(i=0;i<r;i++){
 					if(B[i]=='I' || B[i]=='i')
 					B[i]='U';
 					}
 					break;
 			case 3:
 					for(i=0;i<r;i++){
 					if(B[i]=='O' || B[i]=='o')
 					B[i]='U';
 					}
 					break;
 		}
 	}
 }
 
  void show(char *A, char *B, char *C){
 	printf("\nPrimera cadena: %s\n",A);
 	printf("\nSegunda cadena: %s\n",C);
 	printf("\nTercer cadena: %s\n",B);
 }
