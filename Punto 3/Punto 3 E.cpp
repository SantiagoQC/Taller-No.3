#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float nota1,nota2,nota3,prom;
	int n;
		
		
	printf("Ingrese numero de estudiantes\n   ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	    printf("Introduzca la 1ra nota\n   ");
		scanf("%f",&nota1);
		printf("Introduzca la 2da nota\n   ");
		scanf("%f",&nota2);
		printf("Introduzca la 3ra nota\n   ");
		scanf("%f",&nota3);
		prom=(nota1+nota2+nota3)/3;
		printf("El rpomedio es: %.2f \n",prom);
	}

		
	
	return 0;
}

