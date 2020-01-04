//Calculadora de suma, resta, multiplicacion y division

#include <stdio.h>
#include <stdlib.h>

#define ANCHO 82
#define ALTO 5

int menu(void);
int count;
int count2;
int calculoelegido;
int numero1, numero2;
int resultado;

main(){
	
	while(1)
	{
		
		switch(menu()){
			
			case 1:
			{
				{	//TITULO DE LA CALCULADORA
				
					printf("\n");

					for( count = 1; count <= ANCHO; count++ ){ //parte de arriba titulo. Ancho
						printf("*");
					}
					printf("\n");
	
					for (count = 1; count <= ALTO-2; count++ ){ //parte del medio. alto
	
						if(count == ALTO-3){
			
							printf("*");
			
							for(count = 1; count <= 29; count++){
								printf(" ");
							}
			
							printf("C A L C U L A D O R A");
			
							for(count = 1; count <= 30; count++){
								printf(" ");
							}
							printf("*");
			
							printf("\n");
						}
		
						printf("*");
		
						for( count2 = 1; count2 <= ANCHO-2; count2++){//parte del medio. ancho
							printf(" ");
						}
		
						printf("*\n");
					}
	
					for( count = 1; count <= ANCHO; count++){ //parte de abajo. ancho
						printf("*");
					}
				}
				
				printf("\n");
				puts(" Introduce el primer numero: ");
				scanf("%d", &numero1);
				puts(" Introduce el segundo numero: ");
				scanf("%d", &numero2);
				
				resultado = numero1 + numero2;
				
				printf("\n El resultado es: %d\n\n", resultado);
				
				system("PAUSE");
				break;
			}
			
			case 2:
			{
								{	//TITULO DE LA CALCULADORA
				
					printf("\n");

					for( count = 1; count <= ANCHO; count++ ){ //parte de arriba titulo. Ancho
						printf("*");
					}
					printf("\n");
	
					for (count = 1; count <= ALTO-2; count++ ){ //parte del medio. alto
	
						if(count == ALTO-3){
			
							printf("*");
			
							for(count = 1; count <= 29; count++){
								printf(" ");
							}
			
							printf("C A L C U L A D O R A");
			
							for(count = 1; count <= 30; count++){
								printf(" ");
							}
							printf("*");
			
							printf("\n");
						}
		
						printf("*");
		
						for( count2 = 1; count2 <= ANCHO-2; count2++){//parte del medio. ancho
							printf(" ");
						}
		
						printf("*\n");
					}
	
					for( count = 1; count <= ANCHO; count++){ //parte de abajo. ancho
						printf("*");
					}
				}
				
				printf("\n");
				puts(" Introduce el primer numero: ");
				scanf("%d", &numero1);
				puts(" Introduce el segundo numero: ");
				scanf("%d", &numero2);
				
				resultado = numero1 - numero2;
				
				printf("\n El resultado es: %d\n\n", resultado);
				
				system("PAUSE");
				break;
			}
			
			case 3:
			{
								{	//TITULO DE LA CALCULADORA
				
					printf("\n");

					for( count = 1; count <= ANCHO; count++ ){ //parte de arriba titulo. Ancho
						printf("*");
					}
					printf("\n");
	
					for (count = 1; count <= ALTO-2; count++ ){ //parte del medio. alto
	
						if(count == ALTO-3){
			
							printf("*");
			
							for(count = 1; count <= 29; count++){
								printf(" ");
							}
			
							printf("C A L C U L A D O R A");
			
							for(count = 1; count <= 30; count++){
								printf(" ");
							}
							printf("*");
			
							printf("\n");
						}
		
						printf("*");
		
						for( count2 = 1; count2 <= ANCHO-2; count2++){//parte del medio. ancho
							printf(" ");
						}
		
						printf("*\n");
					}
	
					for( count = 1; count <= ANCHO; count++){ //parte de abajo. ancho
						printf("*");
					}
				}
				
				printf("\n");
				puts(" Introduce el primer numero: ");
				scanf("%d", &numero1);
				puts(" Introduce el segundo numero: ");
				scanf("%d", &numero2);
				
				resultado = numero1 * numero2;
				
				printf("\n El resultado es: %d\n\n", resultado);
				
				system("PAUSE");
				
				break;
			}
			
			case 4:
			{
								{	//TITULO DE LA CALCULADORA
				
					printf("\n");

					for( count = 1; count <= ANCHO; count++ ){ //parte de arriba titulo. Ancho
						printf("*");
					}
					printf("\n");
	
					for (count = 1; count <= ALTO-2; count++ ){ //parte del medio. alto
	
						if(count == ALTO-3){
			
							printf("*");
			
							for(count = 1; count <= 29; count++){
								printf(" ");
							}
			
							printf("C A L C U L A D O R A");
			
							for(count = 1; count <= 30; count++){
								printf(" ");
							}
							printf("*");
			
							printf("\n");
						}
		
						printf("*");
		
						for( count2 = 1; count2 <= ANCHO-2; count2++){//parte del medio. ancho
							printf(" ");
						}
		
						printf("*\n");
					}
	
					for( count = 1; count <= ANCHO; count++){ //parte de abajo. ancho
						printf("*");
					}
				}
				
				printf("\n");
				puts(" Introduce el primer numero: ");
				scanf("%d", &numero1);
				puts(" Introduce el segundo numero: ");
				scanf("%d", &numero2);
				
				resultado = numero1 / numero2;
				
				printf("\n El resultado es: %d\n\n", resultado);
				
				system("PAUSE");
				
				break;
			}
			
			case 5:
			{
				printf("\n");
				printf(" Has elegido salir del programa\n");
				sleep(3);
				printf(" Apagando calculadora...");
				sleep(3);
				
				return 0;
			}
			
			default:
			{
				system("cls");
				
				printf("\a Por favor, elija una de las opciones.");
				
				sleep(4);
			}
		}
	
	}
	
	return 0;
}

int menu(void){
	
	int respuesta;
	
	printf("\n Elija el tipo de calculo que desea introduciendo el numero correspondiente y presionando <Enter>: ");
	printf("\n\n 1. Suma\t\t 2. Resta\t\t 3. Multiplicacion\t\t 4. Division\t\t 5. Salir\n\n");
	scanf("%d", &respuesta);
	printf(" Cargando la opcion %d...", respuesta);
	
	sleep(5);
	
	system("cls");
	
	return respuesta;
}