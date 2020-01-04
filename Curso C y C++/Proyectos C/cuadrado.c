#include <stdio.h>
#include <stdlib.h>

char letra;
int ancho, alto;
int i, j;

main(){

	printf("\nIntroduce el caracter con el que quieres que se haga el cuadrilatero: ");
		scanf("%c", &letra); 
	printf("\nIntroduzca el alto del cuadrilatero: ");
		scanf("%d", &alto); //36
	printf("Vale, ahora introduce el ancho: ");
		scanf("%d", &ancho); //162
	
	printf("\n\nAhi tiene su cuadrilatero!!\n");

	
	//ancho superior:
	
	for(i = 1; i <= ancho; i++){
		printf("%c", letra);
	}
	printf("\n");
	
	
	//parte del medio: altura
	
	for(i = 1; i <= alto-2; i++){
		printf("%c", letra);
		
		//parte del medio: ancho (espacio en blanco)
		for(j = 1; j <= ancho-2; j++){
			printf(" ");
		}
		printf("%c", letra);
		printf("\n");
	}
	
	//parte inferior: ancho
	
	for(i = 1; i <= ancho; i++){
		printf("%c", letra);
	}
	
	printf("\n\n");

	
	system("PAUSE");
}