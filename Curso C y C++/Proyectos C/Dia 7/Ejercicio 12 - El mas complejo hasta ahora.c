#include <stdio.h>
#include <stdlib.h>

int arreglo [10], x, numero;
int respuestaInicial;
int maximo = -32000;
int minimo = 32000;


main ()
{

puts("Usted tiene que introducir 10 numeros enteros.\n");
sleep(3);
puts("Acto seguido, le mostraremos cual es el mayor y cual es el menor.\n");
sleep(4);
puts("Si desea salir del programa pulse 0 cuando este introduciendo los numeros.\n");
sleep(4);

puts("Desea comenzar? Solo pulse 1 o 2 y <Enter> (1.Si / 2.No)");
scanf("%d", &respuestaInicial);

if (respuestaInicial == 1)
{
	puts("Comencemos.");
	sleep(3);
	system("cls"); //limpia la pantalla
	
	for ( x = 1; x <= 10 && x != 0 ; x++)
	{
		printf("Introduce un valor entero: \n");
		scanf("%d", &numero);

		if (numero == 0)
		{
			puts("Al pulsar 0, el programa se cerrara.\n");           //x ira aumentando hasta que llegue a 10. Mientras aumenta sucede\
																		el printf, scanf, y el printf
			puts("Por favor, espere unos segundos...\n");
			
			sleep(6);
			return 0;
		}
	
		
		printf("Numeros introducidos: %d\n\n", x);	
		
		arreglo[x] = numero; // a cada elemento del array le asigna un numero
		
		if (arreglo[x] > maximo){ //si un numero de ese array es mayor que el maximo y supera a los otros numeros,\
									el maximo se le asigna a ese numero
		maximo = arreglo[x];}
	
		if (arreglo[x] < minimo){
		minimo = arreglo[x];}
	}
	
		printf("El mayor numero introducido es: %d\n", maximo);
		printf("El menor numero introducido es: %d\n", minimo);
		
		system("PAUSE");
		return 0;
}

else if (respuestaInicial == 2){
	puts("\nSentimos las molestias. Pulse <Enter> y el programa se cerrara.\n");
	
	system("PAUSE");
	
	return 0;
}
else{
	puts("Perdon?, Responda con un 'Si' o un 'No'. ");
	scanf("%s", &respuestaInicial);
}
}


