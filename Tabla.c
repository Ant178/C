# include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300; versión de punto flotante */


main( )
{
float fahr, celsius;
int lower, upper, step;
lower = 0; /* límite superior de la tabla de temperaturas */
upper = 300; /* límite superior */
step = 20; /* tamaño del incremento */
fahr = lower;
printf("\tTabla de conversion de temperatura Fharenheit a Celsius\n");
while (fahr <= upper) {
celsius =(5.0/9.0) * (fahr-32.0);
printf("\n%.2f\t%.4f\n", fahr, celsius);
fahr = fahr + step;
}
}
