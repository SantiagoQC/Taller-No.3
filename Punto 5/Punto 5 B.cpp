/* 
* Programa: Suma de numeros ingresados
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/
#include <stdio.h>
//Funcion principal
main(){
	int suma=0;
	int ingreso;
	printf("Ingresa numeros para sumar y 0 para el resultado\n ");
	
	do{
		scanf("%d",&ingreso);
		suma = suma+ingreso ;
	
	}
	while(ingreso!=0);
	printf("La suma de los numeros ingresados es: %d ",suma);
	
}
