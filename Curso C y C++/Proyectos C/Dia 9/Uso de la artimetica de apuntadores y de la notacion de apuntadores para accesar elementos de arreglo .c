//Demuestra el uso de aritmetica de apuntadores para accesar\
elementos de arreglo con notacion de apuntadores
#include <stdio.h>
#define MAX 10

//Declara e inicializa un arreglo de enteros

int i_array[MAX] = {0,1,2,3,4,5,6,7,8,9 };

//declara un apuntador a int y una variable int
int *i_ptr;
int count;

//declara e inicializa un arreglo de flotantes

float f_array[MAX] = { .0, .1, .2, .3, .4, .5, .6, .7, .8, .9 };

//declara un apuntador a float

float *f_ptr;

main()
{
	//inicializa los apuntadores
	
	i_ptr = i_array;
	f_ptr = f_array;
	
	//imprime los elementos del arreglo
	
	for (count = 0; count < MAX; count++)
	{
		printf("\n%d\t%f", *i_ptr++, *f_ptr++);
	}
	
	system("PAUSE");
}