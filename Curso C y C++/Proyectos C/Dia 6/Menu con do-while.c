#include <stdio.h>

int eleccion_menu(void);

main()
{
	int eleccion;
	
	eleccion = eleccion_menu();
	
	printf("Tu eleccion en el menu es %d\n\n", eleccion);
	
	if (eleccion == 4){
		printf("El programa se cerrara en unos segundos...");
		sleep(5);
		return 0;
	}else {
		printf("Continue navegando por el menu.\n\n");
		system ("PAUSE");
	}
	

	
}

eleccion_menu(void)
{
	int seleccion = 0;
	
	do
	{
		printf("\t");
		printf("\t1 - Aniadir una grabacion");
		printf("\t2 - Cambiar una grabacion");
		printf("\t3 - Borrar una grabacion");
		printf("\t4 - Salir");
		printf("\n");
		printf("\nElige una seleccion:");
		
		scanf("%d", &seleccion);
		
	}while (seleccion < 1 || seleccion > 4);
	
	return seleccion;
}