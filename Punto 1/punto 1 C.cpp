/* 
* Programa: calcular area rectangulo
* Fecha: 21-08-2018
* Elaborado por: Felipe Henao
*/


#include <iostream>
using namespace std;
//Funcion principal
int main() 
{
	float b,a;
	printf("Ingrese la altura rectangulo\n");
	scanf("%f",&a);
	printf("Ingrese la base del rectangulo\n");
	scanf("%f",&b);
	printf("El area del rectangulo es: %.2f\n", a*b/2);
		
	
	return 0;
}

