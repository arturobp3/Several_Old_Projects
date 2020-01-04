int producto_numeros(int a, int b){
	
	return (a * b);
}

int division_numeros(int c, int d){
	
	respuesta = 0;
	
	if (d == 0){
		respuesta = 0;
	}
	else{
		respuesta = c/d;
		return respuesta;
	}
	
}

main (){
	
	int numero1 = 10, numero2 = 5;
	int x, y, z;
	
	x = producto_numeros(numero1, numero2);
	y = division_numeros(numero1, numero2);
	z = division_numeros(numero1, 0);
	
	
	printf("\nnumero 1 es %d y el numero 2 es %d", numero1, numero2);
	printf("\nnumber1 * number2 is %d", x);
	printf("\nnumber1 / number2 es %d", y);
	printf("\number1 / 0 es %d", z);
	
	system("PAUSE");
	return 0;
}