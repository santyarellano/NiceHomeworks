#include <stdio.h>


/*
* ==================================FUNCTION==========================================================
* Name: Tama�o_texto
* Description: Lee el texto introducido hasta que llegue un \n para saber cuantos car�cteres contiene
*	el mensaje.
* ====================================================================================================
*/
int Tama�o_texto(char texto[500]) {
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
