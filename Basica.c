//Archivo de cabecera 
 #include<stdio.h>
 
 //Prototipos de funciones
 void datosEntrada(float *num1);
 void datosentrada2(float *num2);
 void suma(float *num1, float *num2, float *sum);
 void resta(float *num1, float *num2, float *res);
 void multiplicacion(float *num1, float *num2, float *mult);
 void division(float *num1, float *num2, float *div);
 void mostrarResul(float *sum, float *res, float *mult, float *div);

 //Función principal
 void main(void){
 	float num1, num2, sum, res, mult, div,num;
 	datosEntrada(&num1);
 	datosentrada2(&num2);
 	suma(&num1,&num2,&sum);
 	resta(&num1,&num2,&res);
 	multiplicacion(&num1,&num2,&mult);
 	division(&num1,&num2,&div);
 	mostrarResul(&sum,&res,&mult,&div);
 }
 
 //Cuerpo de las funciones
 void datosEntrada(float *num1){
 	printf("\nIntroduzca un numero decimal\t");
 	 scanf("%f",*&num1);

 }
 
  void datosentrada2(float *num2){
 	printf("\nIntroduzca un numero decimal\t");
 	 scanf("%f",*&num2);

 }
 
 void suma(float *num1, float *num2, float *sum){
 	*sum = *num1 + *num2;
	
 }
 
 void resta(float *num1, float *num2, float *res){
 	*res = *num1 - *num2;
	 	
 }
 
 void multiplicacion(float *num1, float *num2, float *mult){
 	*mult = *num1 * (*num2);
 	
 }
 
 void division(float *num1, float *num2, float *div){
 	*div = *num1 / *num2;
 }
 
 void mostrarResul(float *sum, float *res, float *mult, float *div){
 printf("\nLa suma es:\t%.1f", *sum);
 printf("\nLa resta es:\t%.1f", *res);
 printf("\nLa multiplicacion es:\t%.1f", *mult);
 printf("\nLa division es:\t%.6f", *div);

 }
