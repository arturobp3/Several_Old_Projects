#include <stdio.h> 

int valores[10], x, numero, suma;
void numerosEnPantalla (void);
long total = 0;

main()
{
	for( x = 1; x <= 10; x++ )
	{
		puts("Introduzca un valor entero hasta llegar a introducir 10: ");
		scanf("%d", &numero);
		total = total + numero;
		
		numerosEnPantalla();
		
	}
	
	
	printf("La suma de esos numeros es: %d\n", total);
	
	
	system("PAUSE");
	
	return 0;
		
}

void numerosEnPantalla (void)
{	
	
	printf("Su numero introducido: %d, ocupa el lugar %d\n", numero, x);
	
}
