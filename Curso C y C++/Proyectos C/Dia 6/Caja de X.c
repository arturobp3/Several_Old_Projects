#include <stdio.h>

void draw_box( int row, int column);

main()
{
	draw_box( 8, 35 );
	
	getchar();
	getchar();
	
	return 0;
}

void draw_box( int row, int column )
{
	int col;
	int r;
	for(r = row ; r > 0; r-- )
	{
		for(col = column; col > 0; col--)
			printf( "X" );
		
		printf( "\n" );
	}
}