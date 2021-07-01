//Archivos de cabecera 
#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
float datosRad(void);
float datosMarad(void);
float datosAltu(void);
float datosGene(void);
float calcularVc(float r, float h);
float areaTron(float rm, float r, float g);
float volumenCon(float r, float h);
float voluEsfe(float r);
void mostrarResul(float v, float at, float vco, float esf);

//Declaración de constantes 
#define PI 3.1416

//Función principal
void main(){
	float r, rm, h, g, v, at , vco, esf;
	r = datosRad();
	rm = datosMarad();
	h = datosAltu();
	g = datosGene();
	v = calcularVc(r, h);
	at = areaTron(rm, r, g);
	vco = volumenCon(r, h);
	esf = voluEsfe(r);
	mostrarResul(v, at, vco, esf);
	
}


//Cuerpo de las funciones
float datosRad(void){
	float r;
	printf("Introduzca el valor del radio:\t");
	scanf("%f",&r);
	return r;
	
}

float datosMarad(void){
	float rm;
	printf("\nIntroduzca el valor del radio mayor:\t");
	scanf("%f",&rm);
	return rm;
	
}

float datosAltu(void){
	float h;
	printf("\nIntroduzca el valor de la altura:\t");
	scanf("%f",&h);
	return h;
	
}

float datosGene(void){
	float g;
	printf("\nIntroduzca el valor de la generatriz:\t");
	scanf("%f",&g);
	return g;
	
}

float calcularVc(float r, float h){
	float v;
	v = PI * (pow(r,2)) * h;
	return v;

}

float areaTron(float rm, float r, float g ){
	float al, at;
	al = PI * g * (rm + r);
	at = al + (PI * (pow(rm,2))) + (PI * (pow(r,2)));
	return at;
}

float volumenCon(float r, float h){
	float vco;
	vco = (1.0/3.0) * PI * (pow(r,2)) * h;
	return vco;
	
}

float voluEsfe(float r){
	float esf;
	esf = (4.0/3.0) * PI * (pow(r,3));
	return esf;
	
}

void mostrarResul(float v, float at, float vco, float esf ){
	printf("\nEl volumen del cilindro es:\t%f\n",v);	
	printf("\nEl area del tronco es:\t%f\n",at);	
	printf("\nEl volumen del cono es:\t%f\n",vco);	
	printf("\nEl volumen de la esfera es:\t%f\n",esf);
}











