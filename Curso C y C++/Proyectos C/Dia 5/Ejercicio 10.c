#include <stdio.h>

float mediaDeLosNumeros (float a, float b, float c, float d, float e);
float resultado;
float x, y, z, w, r;

main(){
	
	printf("\nIntroduzca 5 numeros con decimales: \n");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	scanf("%f", &w);
	scanf("%f", &r);
	
	resultado = mediaDeLosNumeros(x, y, z, w, r);
	
	printf("La media de estos 5 numeros es: %f\n\n", resultado);
	
	system("PAUSE");
	return 0;

	
}

float mediaDeLosNumeros (float a, float b, float c, float d, float e){
	
	return ((a + b + c + d + e)/5);
}

