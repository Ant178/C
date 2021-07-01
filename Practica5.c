//Problema 6 promedio de G grupos, N alumnos, M materias, 3 calificaciones 
//Archivos de cabecera 
#include<stdio.h>

//Prototipo de funciones
void grupos(int* );
void alumnos(int* );
void materia(int* );
void cali(float* );
void ciclo();
void promalu(float* );
void promcag(float* );
void promegru(float* );

//Funcion principal
void main(){
	ciclo();
}
//Cuerpo de las funciones
void grupos(int* g){
	printf("Ingrese la cantidad de grupos: ");
	scanf("%d",g);
	
}

void alumnos(int* a){
	printf("\nIngrese la cantidad de alumnos que pertenecen al grupo: ");
	scanf("%d",a);
	
}

void materia(int* m){
	printf("\nIngrese la cantidad de materias de cada alumno: ");
	scanf("%d",m);
	
}

void cali(float* c){
	printf("\nIngrese la calificacion de los parciales en la materia: ");
	scanf("%f",c);
	
}

void ciclo(){
	int g,a,m,i,k,j,l;
	float c,d,p=0,pg=0,pm=0,pa=0,ptg,pg2=0,t=0,x=0;
	grupos(&g);
	for(i=0; i<g; i++){	
		pm=0,pa=0,pg=0;
		alumnos(&a);
		for(k=0; k<a; k++){
			printf("\n");
			materia(&m);
			for(j=0; j<m; j++){	
				c=0;
				for(l=0; l<3; l++){
					c=0;
					cali(&c);
					p+=c;
					x+=p;	
					p=0;				
				}
				pm+= (x/3);
				t+=pm;
				pm=0;
				p=0;
				x=0;	
			}
			pa+= (t/m);
			d+=pa;
			promalu(&pa);
			pa=0;
			printf("\n");
			t=0;
		}
		pg+= (d/a);
		pg2+=pg;
			printf("\n");
			promcag(&pg);
			printf("\n");
		pg=0;
		d=0;
	}
	ptg= pg2/g;
	printf("\n");
	promegru(&ptg);
	printf("\n");
		
}

void promalu(float* pa){
	printf("\nEl promedio del alumno es: %f",*pa);
	
}

void promcag(float* pg){
	printf("\nEl promedio de este grupo es: %f",*pg);
	
}

void promegru(float* ptg){
	printf("\nEl promedio de todos los grupos es: %f",*ptg);
	
}
//Mostrar Promedio de los grupos, Promedio de cada grupo y el Promedio de cada alumno 
