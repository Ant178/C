/* Hacer un programa que simule un cajero automático con un saldo incial de
1000 Dólares.  */

#include<stdio.h>

int main(){
	int opcion;
	float din, retirar,saldo=1000;
	printf("\tBienvenido a su cajero virtual\n");
	printf("\n1) Ingresar saldo en cuenta\n");
	printf("\n2) Retirar dinero de la cuenta\n ");
	printf("\n3) Salir\n");
	printf("\nIngrese una opcion\n");
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1: printf("\nIntroduzca el saldo que va a ingresar\n");
				scanf("%f",&din);
				saldo += din;
				printf("\nSu nuevo saldo es: %.2f",saldo);
			break;
		case 2: printf("\nCuanto dinero desea retirar ");
				scanf("%f",&retirar);
				if(retirar > 1000){
					printf("\nEl saldo es insuficiente de acuerdo al monto que quiere retirar ");
					
				}
				else{
					saldo -= retirar;
					printf("Su nuevo saldo es de: %f",saldo);
				}
			break;
		case 3: break;
		
		default: printf("La opcion que ingreso no se encuentra en nuestro menu");	
			
		return 0;
	}
	
	
	
	
	
	
}











