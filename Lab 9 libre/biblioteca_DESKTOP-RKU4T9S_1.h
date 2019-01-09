#include <stdio.h>


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
