#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float area, radio;
	 for (int i=1;i<6;i++){
		printf ("Introdusca radio %d\n", i);
		scanf("%f",&radio);
		area = 3.1416 * radio *radio;
		printf(" El area de la circunferencia %d es: %.2f\n",i,area);
	 }
	return 0;
}
