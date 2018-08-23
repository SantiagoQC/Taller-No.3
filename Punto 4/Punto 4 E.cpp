#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int lado;
	while(lado!= 0){
	printf("Ingrese un lado del cubo o ingrese 0 para salir\n");
	scanf("%d",&lado);
	printf("El area del cubo es: %d\n",(lado*lado)*6);
	}
	return 0;
}

