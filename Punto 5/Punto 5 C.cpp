#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero,result,rescal=0,s=0;
	char letra;
	do {
		printf("\nIngrese numero entero\n");
		scanf("%d",&numero);
		s++;
		result=numero*numero-numero;
		rescal=rescal+result;
		printf("%d * %d - %d = %d",numero,numero,numero,result);
		printf("\n¿Desea introducir otro numero? ingrese s para si n para no\n");
		fflush (stdin);
		scanf("%c",&letra);
	}
	while(letra !='n');
	printf("Cantidad de numeros introducidos por el usuario: %d\n Suma de los resultados calculados: %d",s,rescal);
	return 0;
}

