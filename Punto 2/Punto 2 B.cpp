#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) 
{
	float num1,num2,num3,mayor;
	printf("\nIngrese tres numeros para saber cual es el mayor\n");
	scanf("%f %f %f",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3)
	{
		mayor=num1;
	}
	
	else if(num2>num3)
	   {
		mayor=num2;
	}
	else 
	{
		mayor=num3;
		}
	
	
	printf ("\nEl numero mayor es: %.2f ",mayor);
	return 0;
}

