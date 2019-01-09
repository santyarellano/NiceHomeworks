#include <stdio.h>

#define RENGLONES_MAX 4
#define COLUMNAS_MAX 4


/*
* ==================================FUNCTION==========================================================
* Name:limpiar_juego
* Description: vacía la matríz y le asigna valores de 0
* ====================================================================================================
*/
void limpiar_juego(int matriz[RENGLONES_MAX][COLUMNAS_MAX]) {
	int i, j;

	for (i = 0; i < RENGLONES_MAX; i++) {
		for (j = 0; j < COLUMNAS_MAX; j++) {
			matriz[i][j] = 0;
		}
	}
}

/*
* ==================================FUNCTION==========================================================
* Name: imprimir_menu
* Description: imprime el menú en la pantalla
* ====================================================================================================
*/
void imprimir_menu(void) {
	printf(
		"\nMENU"
		"\n1. Jugar"
		"\n2. Salir"
		"\nOpcion: "
	);
}

/*
* ==================================FUNCTION==========================================================
* Name: imprimir_gato
* Description: imprime el gato en la pantalla
* ====================================================================================================
*/
void imprimir_gato(int matriz[RENGLONES_MAX][COLUMNAS_MAX]) {
	int i, j;
	printf("\n");
	for (i = 0; i < RENGLONES_MAX; i++) {
		for (j = 0; j < COLUMNAS_MAX; j++) {
			if (matriz[i][j] == 0) { printf("   ", matriz[i][j]); }
			if (matriz[i][j] == 1) { printf(" 1 ", matriz[i][j]); }
			if (matriz[i][j] == 2) { printf(" 2 ", matriz[i][j]); }
			if (matriz[i][j] == 3) { printf(" 3 ", matriz[i][j]); }
			if (matriz[i][j] == 4) { printf(" A ", matriz[i][j]); }
			if (matriz[i][j] == 5) { printf(" B ", matriz[i][j]); }
			if (matriz[i][j] == 6) { printf(" C ", matriz[i][j]); }
			if (matriz[i][j] == 7) { printf(" X ", matriz[i][j]); }
			if (matriz[i][j] == 8) { printf(" O ", matriz[i][j]); }
		}
		printf("\n");
	}
}

/*
* ==================================FUNCTION==========================================================
* Name: formato_juego
* Description: le da formato al juego (sistema de coordenadas)
* ====================================================================================================
*/
void formato_juego(int matriz[RENGLONES_MAX][COLUMNAS_MAX]) {
	int i, j;
	for (i = 0; i < RENGLONES_MAX; i++) {
		for (j = 0; j < COLUMNAS_MAX; j++) {
			if (i == 0 && j == 0) { matriz[i][j] = 0; }
			else if (i == 0 && j == 1) { matriz[i][j] = 1; }
			else if (i == 0 && j == 2) { matriz[i][j] = 2; }
			else if (i == 0 && j == 3) { matriz[i][j] = 3; }
			else if (i == 1 && j == 0) { matriz[i][j] = 4; }
			else if (i == 2 && j == 0) { matriz[i][j] = 5; }
			else if (i == 3 && j == 0) { matriz[i][j] = 6; }
		}
	}
}

/*
* ==================================FUNCTION==========================================================
* Name: instrucciones_juego
* Description: instrucciones de como se juega el juego
* ====================================================================================================
*/
void instrucciones_juego(void) {
	printf(
		"\nINSTRUCCIONES:"
		"\nEl juego es de 2 jugadores"
		"\nEn cada turno tienen que escribir la coordenada"
		"\nEn formato A1, B2, etc."
		"\n"
	);
}

/*
* ==================================FUNCTION==========================================================
* Name: turno
* Description: función del turno
* ====================================================================================================
*/
void turno1(int matriz[RENGLONES_MAX][COLUMNAS_MAX], char coordenada1, int coordenada2) {
	int x, y = 0;
	printf("\nJugador 1: ");
	scanf("%c %i%*c", &coordenada1, &coordenada2);

	if (coordenada1 == 'A' || coordenada1 == 'a') { y = 1; }
	if (coordenada1 == 'B' || coordenada1 == 'b') { y = 2; }
	if (coordenada1 == 'C' || coordenada1 == 'c') { y = 3; }
		
	x = coordenada2;

	matriz[y][x] = 7;

}
void turno2(int matriz[RENGLONES_MAX][COLUMNAS_MAX], char coordenada1, int coordenada2) {
	int x, y = 0;
	printf("\nJugador 2: ");
	scanf("%c %i%*c", &coordenada1, &coordenada2);

	if (coordenada1 == 'A' || coordenada1 == 'a') { y = 1; }
	if (coordenada1 == 'B' || coordenada1 == 'b') { y = 2; }
	if (coordenada1 == 'C' || coordenada1 == 'c') { y = 3; }

	x = coordenada2;

	matriz[y][x] = 8;

}

/*
* ==================================FUNCTION==========================================================
* Name: verificar_ganador
* Description: checa alineación de la matriz para verificar si alguien ya ganó y quién fué
* ====================================================================================================
*/
int verificar_ganador(int matriz[RENGLONES_MAX][COLUMNAS_MAX]) {
	int i, j;
	int res = 0;
	// horizontal A
	if (matriz[1][1] == 7 && matriz[1][2] == 7 && matriz[1][3] == 7) res = 1;
	if (matriz[1][1] == 8 && matriz[1][2] == 8 && matriz[1][3] == 8) res = 2;
	// horizontal B
	if (matriz[2][1] == 7 && matriz[2][2] == 7 && matriz[2][3] == 7) res = 1;
	if (matriz[2][1] == 8 && matriz[2][2] == 8 && matriz[2][3] == 8) res = 2;
	// horizontal C
	if (matriz[3][1] == 7 && matriz[3][2] == 7 && matriz[3][3] == 7) res = 1;
	if (matriz[3][1] == 8 && matriz[3][2] == 8 && matriz[3][3] == 8) res = 2;
	// vertical 1
	if (matriz[1][1] == 7 && matriz[2][1] == 7 && matriz[3][1] == 7) res = 1;
	if (matriz[1][1] == 8 && matriz[2][1] == 8 && matriz[3][1] == 8) res = 2;
	// vertical 2
	if (matriz[1][2] == 7 && matriz[2][2] == 7 && matriz[3][2] == 7) res = 1;
	if (matriz[1][2] == 8 && matriz[2][2] == 8 && matriz[3][2] == 8) res = 2;
	// vertical 3
	if (matriz[1][3] == 7 && matriz[2][3] == 7 && matriz[3][3] == 7) res = 1;
	if (matriz[1][3] == 8 && matriz[2][3] == 8 && matriz[3][3] == 8) res = 2;

	return res;
}

/*
* ==================================FUNCTION==========================================================
* Name: ciclo_juego
* Description: el ciclo del juego, leyendo lo que introduce el jugador y checa si ya acabó el juego
* ====================================================================================================
*/
void ciclo_juego(int matriz[RENGLONES_MAX][COLUMNAS_MAX]) {
	int jugando = 1;
	int i, j;
	int jugador = 1;
	int ganador = 0;
	char coordenada1 = 0;
	int coordenada2 = 0;

	while (jugando == 1) {
		imprimir_gato(matriz);
		if (jugador == 1) { 
			turno1(matriz, coordenada1, coordenada2); 
			jugador = 2;
		}
		else if (jugador == 2) {
			turno2(matriz, coordenada1, coordenada2);
			jugador = 1;
		}

		ganador = verificar_ganador(matriz);
		if (ganador == 1) { printf("¡gano el jugador 1!"); jugando = 0; }
		else if (ganador == 2) { printf("¡gano el jugador 2!"); jugando = 0; }
	}
	
}