//el enunciado goto se utiliza como atajo para redireccionar a una parte del programa que se desee.\
se declara un destino. goto destino; y el destino es un enunciado de etiqueta.

#include <stdio.h>
#include <stdlib.h>

main(){
	
	int n;
	
	start: ; //enunciado de etiqueta
	
		puts("Introduce un numero entre 0 y 10: ");
		scanf("%d", &n);
		
		if (n < 0 || n > 10){
			goto start;
		}
		else if (n == 0){
			goto location0;
		}
		else if (n == 1){
			goto location1;
		}
		else{
		goto location2;}
		
	location0: ;
		puts("You entered 0.");
		goto end;
		
	location1: ;
		puts("You entered 1");
		goto end;
		
	location2: ;
		puts("You entered domrthing between 2 and 10");
		goto end;
		
		
	end: ;
	
	system("PAUSE");
	
	sleep(5);
	system("cls");
	
	goto start;
	
}