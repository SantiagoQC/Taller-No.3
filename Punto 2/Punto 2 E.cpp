#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) 
{
	int num1;
	printf("\nIngrese un numero para saber si es par o impar\n");
	scanf("%d",&num1);
	
	if(num1 % 2 == 0)
	{
		printf("Es par");
	}
	
	else 
	{
		printf("Es impar");
	}
	
	return 0;
}
