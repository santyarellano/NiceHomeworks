/*
* ====================================================================================================
* File name: program.c
* Description: será un juego "gato" representado con una matriz usando "O" y "X"
*
* Version: 1
* Created (date): 11/2/2017
*
* Author: A01208937
*
* ====================================================================================================
*/

#include "biblioteca.h"

int main() {

	int matriz[RENGLONES_MAX][COLUMNAS_MAX];
	int salir = 0;
	int opcion = 0;

	//start 
	//limpiar_juego(matriz);


	// CICLO DEL JUEGO
	do {
		limpiar_juego(matriz);
		formato_juego(matriz);
		imprimir_menu();
		scanf("%i", &opcion);

		switch (opcion)
		{
		case 1: 
			instrucciones_juego();
			ciclo_juego(matriz);
			break;
		case 2:
			salir = 1;
			break;
		default:
			break;
		}

	} while (salir == 0);

	return 0;
}