#include<stdio.h>
#include<math.h>

float datosEntrada(void);
float calcularArea(float a, float b, float c);
void mostrarResul(float ar);

int main()
{
	float a, b, c, ar;
	a = datosEntrada();
	b = datosEntrada();
	c = datosEntrada();
	ar = calcularArea(a, b, c);
	mostrarResul(ar);
}


//Cuerpo de las funciones 

float datosEntrada()
{
	float lado;
	printf("Inserte un valor para el lado del triangulo:\t");
	scanf("%f",&lado);
	return lado;
}

float calcularArea(float a, float b, float c)
{
	float ar, x, p;
	p = (a+b+c)/2;
	x = (p*(p-a)*(p-b)*(p-c));
	ar = sqrt(x);
	return ar;
}

void mostrarResul(float ar)
{
	printf("El area es:\t%f",ar);
	
}

