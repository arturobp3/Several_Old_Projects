//Demuestra la direccion entre direcciones\
y elementos de arreglos de diferentes tipos de datos

#include <stdio.h>

//Declara 3 arreglos y una variable de contador

int i[10];
int x;
float f[10];
double d[10];

main()
{
	//Imprime el encabezado de la tabla
	
	printf("\t\tInteger\t\tFloat\t\tDouble");
	
	printf("\n================================");
	printf("======================");
	
	//Imprime las direcciones de cada elemento de arreglo
	
	for (x = 0; x < 10; x++)
	{
		printf("\nElement %d:\t%d\t\t%d\t\t%d", x, &i[x], &f[x], &d[x]);
	}
	printf("\n================================");
	printf("======================\n\n");
	
	system("PAUSE");
}