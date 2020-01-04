#include <stdio.h>

int x,y;

main(){
	
	for ( x = 0; x < 10;x++, printf( "\n" ) )
		for (y = 0; y < 10; y++ )
			printf( "%c", 1 );
		
	getchar();
	getchar();
	return 0;
}

	
// hace un cuadrado de 10x10 de interrogaciones