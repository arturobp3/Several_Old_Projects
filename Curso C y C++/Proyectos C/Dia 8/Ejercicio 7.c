#include <stdio.h>

int array[5][4];
int x, y;

main()
{
	for (x = 0; x < 5; x++)
	{
		for(y = 0; y < 4; y++)
		{
			array[x][y] = rand();
		}
	}
	for (x = 0; x < 5; x++)
	{
		for(y = 0; y < 4; y++)
		{
			printf("array[%d][%d] = %d\n", x, y, array[x][y]);
		}
		system("PAUSE");
	}
	
	
}