//N autos que entran a la ciudad 
//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones 
void autos(int *);
void calculo(int *);
void digito(int *);
void amarillo(int *);
void rosa(int *);
void rojo(int *);
void verde(int *);
void azul(int *);
void mostrarResul(int *, int *, int *, int *, int *);

//Funcion principal
void main(){
	int n;
	autos(&n);
	calculo(&n);
}
//Cuerpo de las funciones
void autos(int *n){
	printf("\nIntroduzca los autos que ingresaron a la ciudad: ");
	scanf("%d",n);
	
}

void calculo(int *n){
	int cont,d,a=0,rs=0,rj=0,v=0,az=0;
	
	for(cont=1; cont<= *n; cont++){
		digito(&d);
		switch(d){
			case 1:
			case 2: amarillo(&a);
			break;
			case 3:
			case 4: rosa(&rs);
			break;
			case 5:
			case 6: rojo(&rj);
			break;
			case 7:
			case 8: verde(&v);
			break;
			case 9: 
			case 0: azul(&az);
			break;
		}
	}
	
	mostrarResul(&a,&rs,&rj,&v,&az);
}

void digito(int *d){
	printf("\nIntroduzca el ultimo digito de su placa: ");
	scanf("%d",d);
}

void amarillo(int *a){
	*a+= 1;

}

void rosa(int *rs){
	*rs+= 1;
}

void rojo(int *rj){
	*rj+= 1;
}

void verde(int *v){
	*v+= 1;
}

void azul(int *az){
	*az+= 1;
}

void mostrarResul(int *a, int *rs, int *rj, int *v, int *az){
	printf("\nAmarillas: %d autos",*a);
	printf("\nRosa: %d autos",*rs);
	printf("\nRoja: %d autos",*rj);
	printf("\nVerde: %d autos",*v);
	printf("\nAzul: %d autos",*az);
	
}
