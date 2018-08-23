/* 
* Programa: Convertir dolares en pesos
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/

#include <stdio.h>
using namespace std;
//Funcion principal
int main() 
{
	float d,p;
	printf("Ingrese a cuanto equivale un dolar en pesos \n");
	scanf("%f",&d);
	printf("\nIngrese la cantidad de dolares a convertir\n");
	scanf("%f" ,&p);
	printf("La cantidad de dolares en pesos es:  %.2f \n", d*p);
	
	
	return 0;
}

