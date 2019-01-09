#include <stdio.h>


/*
* ==================================FUNCTION==========================================================
* Name: Introducir mensaje
* Description: lee el mensaje y asigna el valor.
* ====================================================================================================
*/
void Introducir_mensaje(char texto[500]) {
	fgets(texto, 500, stdin);
}

/*
* ==================================FUNCTION==========================================================
* Name: Tamaño_texto
* Description: Lee el texto introducido hasta que llegue un \n para saber cuantos carácteres contiene
*	el mensaje.
* ====================================================================================================
*/
int Tamaño_texto(char texto[500]) {
	int letra = 0;
	while (texto[letra] != '\n') {
		letra++;
	}

	return letra;
}


/*
* ==================================FUNCTION==========================================================
* Name: Encriptar_mensaje
* Description: encripta el mensaje.
* ====================================================================================================
*/
void Encriptar_mensaje(char texto[500]) {
	int i, letra = 0;
	while (texto[letra] != '\n') {
		letra++;
	}

	for (i = 0; i < letra; i++) {
		texto[i] += letra;
		printf("%c", texto[i]);
	}
}

/*
* ==================================FUNCTION==========================================================
* Name: Decriptar_mensaje
* Description: decripta el mensaje.
* ====================================================================================================
*/
void Decriptar_mensaje(char texto[500]) {
	int i, letra = 0;
	while (texto[letra] != '\n') {
		letra++;
	}

	for (i = 0; i < letra; i++) {
		texto[i] -= letra;
		printf("%c", texto[i]);
	}
}