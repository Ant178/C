# include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300; versi�n de punto flotante */


main( )
{
float fahr, celsius;
int lower, upper, step;
lower = 0; /* l�mite superior de la tabla de temperaturas */
upper = 300; /* l�mite superior */
step = 20; /* tama�o del incremento */
fahr = lower;
printf("\tTabla de conversion de temperatura Fharenheit a Celsius\n");
while (fahr <= upper) {
celsius =(5.0/9.0) * (fahr-32.0);
printf("\n%.2f\t%.4f\n", fahr, celsius);
fahr = fahr + step;
}
}
