//Esta forma presenta un if anidado. Si la primera expresion es\
cierta se ejecuta el enunciado1 y, encaso contrario, se evalua\
la segunda expresion. Si la primera expresion no es cierta y la\
segunda es cierta, se ejecuta el enunciado2. Si ambas expresiones\
son falsas se ejecuta el enunciado3. Solamente uno de los tres\
enunciados se ejecuta.

#include <stdio.h>

int edad;

main(){
	
	printf("\nIntroduzca una edad: ");
	scanf("%d", &edad);
	
	if (edad < 18)
		printf("Menor de edad");
	else if(edad < 65)
		printf("Adulto");
	else
		printf("Anciano");
	
	getchar();
	getchar();
	
	return 0;
}