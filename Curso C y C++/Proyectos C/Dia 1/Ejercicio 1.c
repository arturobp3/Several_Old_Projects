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



puts("\nSentimos las molestias. Pulse <Enter> y el programa se cerrara.\n");
	
	system("PAUSE");
	
	return 0;