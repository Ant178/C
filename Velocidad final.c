/* Calcular la velocidad final Vf de un objeto en caída libre, que parte del 
reposo y cae durante t segundos. La formula es Vf = Vo + gt pero como la 
velocidad inicial es 0 entonces quedaría como Vf = gt donde g=9.81 */

//Archivos de cabecera
#include<stdio.h>

//Prototipos de funciones
float datosEntrada();
float velocidadFin(float seg);
void mostrarResul(float velo);

//Declaración de constantes
#define g 9.81

//Funcion principal
void main(){
	float seg,velo;
	seg = datosEntrada();
	velo = velocidadFin(seg);
	mostrarResul(velo);
		
}

//Cuerpo de las funciones 

float datosEntrada(){
	float seg;
	printf("Introduzca los segundos que tarda en caer el objeto:\t");
	scanf("%f",&seg);
	return seg;

}

float velocidadFin(float seg){
	float velo;
	velo = g * seg;
	return velo;
	
}

void mostrarResul(float velo){
	printf("La velocidad final del objeto es:\t%.2f",velo);
	
}





























