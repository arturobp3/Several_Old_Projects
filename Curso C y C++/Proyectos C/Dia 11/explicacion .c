//declarar una estructura:

struct  /* etiqueta -> */ coordenadas{
	int x;
	int y;
} primera, segunda; //<- instancias

o

struct coordenadas{
	int x;
	int y;
}

//aqui va codigo

struct coordenadas primera, segunda;

//coordenadas en la primera estructura
//el punto . es el operador de miembro de estructura

primera.x = 50;
primera.y = 100;

//para desplegarlo en pantalla se puede poner:

printf("%d, %d", segunda.x, segunda.y);

//------------------------------------------------------------------//

ejemplos de estructuras

struct fecha{
	char mes[2];
	char dia[2];
	char año[4];
	
} fecha_actual;

fecha_actual.mes[1] = 100;
fecha_actual.dia[1] = "Enero";
fecha_actual.año[2] = 'E';

struct tiempo{
	int horas;
	int minutos;
	int segundos;
	
} hora_de_nacimiento = { 8, 45, 0 };

//definir una estructura compleja

//definir un rectangulo

struct coord{
	int x;
	int y;
} arribaizquierda;

struct coord{
	int x;
	int y;
} abajoderecha;

struct rectangulo{
	struct coord arribaizquierda;
	struct coord abajoderecha;
} micuadro;

// (0,10), (100, 200);

micuadro.arribaizquierda.x = 0;
micuadro.arribaizquierda.y = 10;
micuadro.abajoderecha.x = 100;
micuadro.abajoderecha.y = 200;



//FALTAN MUCHAS COSAS POR PONER