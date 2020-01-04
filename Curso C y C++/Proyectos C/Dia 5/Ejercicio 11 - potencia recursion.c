#include <stdio.h>

int three_powered(int power);

main(){
	int a=4;
	int b=9;
	
	printf("\n3 to the power of %d is %d", a, three_powered(a));
	printf("\n3 to the power of %d is %d", b, three_powered(b));
	
	system("PAUSE");
	return 0;
	
}
int three_powered(int power){
	
	if (power < 1)
		return ( 1 );
	else
		return (3*three_powered(power - 1));
	
}