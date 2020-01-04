#include <stdio.h>

//declara e inicializa una variable int

int var = 1;

//declara un apuntador a int

int *ptr;

main()
{
	//inicializa a ptr para que apunte a var
	
	ptr = &var;
	
	//accede a var directa e indirectamente;
	
	printf("\nAcceso directo, var = %d", var);
	printf("\nAcceso indirecto, var = %d", *ptr);
	
	//despliega la direccion de var de dos maneras
	
	printf("\n\nLa direccion de var = %d", &var);
	printf("\nLa direccion de var = %d", ptr);
	
	system("PAUSE");
}