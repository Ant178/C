//Problema 1
//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipo de funciones
void numeroDatos(int *, float *);
void calculo(int *, float *);
void mostrarVal(float *);

//Cuerpo de las funciones 
void main(){
	int m;
	float x;
	numeroDatos(&m, &x);
	calculo(&m, &x);
}

//Cuerpo de las funciones
void numeroDatos(int *m, float *x){
	printf("Introduzca el número de terminos: ");
	scanf("%d",m);
	printf("\nIngrese el valor de x: ");
	scanf("%f",x);
}

void calculo(int *m, float *x){
	int h,b,k,e,i=1,c=1,fac=1,f=1,l=0,y=0;
	float resultado,resu,neg;
	while(i<=*m){
		if(*m%2==0){
		
		for(h=1; h<=(*m/2); h++){
				l+= pow(*x,c);
		}
				for(k=1; k<=c; k++){
					f *= k;
				}
				b = -1;
				neg = ((l/f) * b);
				c+= 4;
				i+= 1;
	}
		else{
			for(e=1; e<=((*m/2)+1); e++){
				y+= pow(*x,c);
			}
				for(k=1; k<=c; k++){
					fac*= k;
				}
				resu = (y/fac);
				c+= 4;
				i+= 1;
			
		}		
	}
	resultado= resu + neg;
		mostrarVal(&resultado);
}

	
void mostrarVal(float *resultado){
	printf("\nLa suma total es: %f",*resultado);  
}
