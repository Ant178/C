//Archivo de cabecera 
 #include<stdio.h>
 
 //Prototipos de funciones
 float datosEntrada(void);
 float suma(float num1, float num2);
 float resta(float num1, float num2);
 float multiplicacion(float num1, float num2);
 float division(float num1, float num2);
 void mostrarResul(float sum, float res, float mult, float div);
 
 //Función principal
 void main(void){
 	float num1, num2, sum, res, mult, div;
 	num1 = datosEntrada();
 	num2 = datosEntrada(),
 	sum = suma(num1,num2);
 	res = resta(num1,num2);
 	mult = multiplicacion(num1,num2);
 	div = division(num1,num2);
 	mostrarResul(sum, res, mult, div);
 	
 }
 
 //Cuerpo de las funciones
 float datosEntrada(){
 	float num;
 	printf("\nIntroduzca un numero decimal\t");
 	scanf("%f",&num);
 	return num;
 }
 
 float suma(float num1, float num2){
 	float  sum;
 	sum = num1 + num2;
 	return sum;
 	
 }
 
 float resta(float num1, float num2){
 	float res;
 	res = num1 - num2;
 	return res;
	 	
 }
 
 float multiplicacion(float num1, float num2){
 	float mult;
 	mult = num1 * num2;
 	return mult;
 	
 }
 
 float division(float num1, float num2){
 	float div;
 	div = num1 / num2;
 	return div;
 }
 
 void mostrarResul(float sum, float res, float mult, float div){
 printf("\nLa suma es:\t%.1f",sum);
 printf("\nLa resta es:\t%.1f",res);
 printf("\nLa multiplicacion es:\t%.1f",mult);
 printf("\nLa division es:\t%.6f",div);

 }
 
