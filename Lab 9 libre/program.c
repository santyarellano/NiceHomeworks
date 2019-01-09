/*
* ====================================================================================================
* File name: Lab 9 Libre
* Description: Encriptador y decriptador
*
* Version: 1.0
* Created (date): 10/27/2017
*
* Author: Santiago Arellano Mendoza
* Organization: ITESM
*
* ====================================================================================================
*/

#include "biblioteca.h"

int main() {
	char texto[500];
	int opcion = 0;
	int salir = 0;
	
	//scanf("%c", &texto);
	//printf("el tamaño es: %i", Tamaño_texto(texto));
	//printf("%i", Tamaño_texto(texto));

	while (salir == 0) {
		printf(
			"\nMENU"
			"\n1. Introducir mensaje"
			"\n2. Encriptar mensaje"
			"\n3. Decriptar mensaje"
			"\n4. Salir"
			"\n"
		);

		scanf("%i%*c", &opcion);
		switch (opcion)
		{
		case 1:
			printf("Introduce el mensaje: ");
			fgets(texto, 500, stdin);
			break;
		case 2:
			Encriptar_mensaje(texto);
			break;
		case 3:
			Decriptar_mensaje(texto);
			break;
		case 4:
			salir = 1;
			break;
		default:
			break;
		}
	}
	


	return 0;
}