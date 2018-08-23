#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) 
{
	float num1,num2,num3,menor;
	printf("\nIngrese tres numeros para saber cual es el menor\n");
	scanf("%f %f %f",&num1,&num2,&num3);
	
	if(num1<num2 && num1<num3)
	{
		menor=num1;
	}
	
	else if(num2<num3)
	{
		menor=num2;
	}
	else 
	{
		menor=num3;
	}
	
	
	printf ("\nEl numero menor es: %.2f ",menor);
	return 0;
}

