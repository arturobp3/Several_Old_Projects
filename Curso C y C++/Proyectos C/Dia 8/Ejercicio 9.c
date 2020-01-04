#include <stdio.h>

int array[10];
int arrayB[10];
int x;

main()
{
	for(x = 0; x < 10; x++)
	{
		array[x] = x;
		printf("array[%d] = %d\n", x, x);
	}
	system("PAUSE");
	
	for(x = 0; x < 10; x++)
	{
		arrayB[x] = x + 10;
		
		printf("arrayB[%d] = %d\n", x, arrayB[x]);
	}
	
	system("PAUSE");
}