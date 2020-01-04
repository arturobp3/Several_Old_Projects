#include <stdio.h> 

float x, y, z;

main()
{
	puts("Introduzca dos valores flotantes: ");
	scanf("%f%f", &x, &y);
	
	z = x * y;
	
	printf("El producto de esos dos numeros es: %f\n", z);
	
	system("PAUSE");
	
	return 0;
}