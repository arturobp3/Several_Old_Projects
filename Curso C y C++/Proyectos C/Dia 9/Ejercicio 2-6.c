#include <stdio.h>

int costo = 100;
int *p_costo;

p_costo = &costo;

*p_costo = 100;

datos[2] = 100;
*(datos+2) = 100;

main()
{
	printf("El valor del apuntador es: %d, y el valor al que esta apuntando es: %d\n", p_costo, *p_costo);
	
}


