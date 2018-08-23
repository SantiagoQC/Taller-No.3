#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
int i=1,s;
while ( i != 50 ) {
	i++;
	if ( i % 2 != 0 ){
		printf("+%d",i);
			s=i+i;
	}
}
printf(" = %d",s);
	
return 0;
}

