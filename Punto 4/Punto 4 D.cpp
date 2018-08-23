#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float num;
	printf("Introduzca numero real\n");
	scanf("%f",&num);
	while(num !=0 && num != 1){
		printf("la mitad de %.2f es %.2f\n",num, num /2);
		printf("introduzca otro numero real\n");
			scanf("%f",&num);
	


	 }
	return 0;
}
