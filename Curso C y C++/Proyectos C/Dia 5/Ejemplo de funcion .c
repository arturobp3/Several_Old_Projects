#include <stdio.h>

//para parar el programa se puede hacer con: sleep(47590);\
system("PAUSE"); con dos getchar();

float x = 3.5, y = 65.11, z;

float mitad_de(float k);

main(){
	
	z = mitad_de(x);
	printf("El valor de z = %f\n", z);
	
	z = mitad_de(y);
	printf("El valor de z = %f\n", z);
	
	
	system("PAUSE");
	return 0;
}

float mitad_de(float k){
	
	//k es el parametro de la funcion. Cada que mitad_de()\
	es llamado, k tiene el valor que se hace pasar como argumento.\
	Es decir, k funciona como un comodin para el nombre de las variables\
	que se quiera poner
	
	return (k/2);	
}