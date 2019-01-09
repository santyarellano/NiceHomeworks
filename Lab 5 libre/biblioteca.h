#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void presentacion(void){
    printf("�Hola! Vamos a jugar Mastermind... \n");
    printf("Inicio: La computadora generar� una combinaci�n aleatoria de 3 numeros. \n");
    printf("T� tendr�s 10 intentos como m�ximo para descifrar la combinaci�n \n");
    printf("En cada intento, al final se te dar� un resultado en el cual: \n");
    printf("    0 significar� que dentro de tu combinaci�n hay un numero que existe dentro de la clave oculta pero no esta en su lugar \n");
    printf("    1 significa que dentro de tu combinacion hay un numero que esta en la misma posicion de la clave oculta \n");
    printf("Los n�meros que podr�s usar son del 0 al 9, y ingresar tus numeros SEPARADOS POR ESPACIOS \n");
    printf("Ejemplo: 1 2 3");
    printf("Tu objetivo es descifrar la combinacion secreta \n");
    printf("Mucha suerte \n");
    printf("--------------------------------------------------------------------------------------------------------------- \n \n");
}

int checarCombinacion (int num1, int num2, int num3, int intento1, int intento2, int intento3) {
    int res = 0;

    //------------------PRIMER NUMERO DE INTENTO-------------------------
    if (intento1 == num1) {
        res = 1;
    } else if (intento1 == num2) {
        res = 0;
    } else if (intento1 == num3) {
        res = 0;
    } else {
        res = 2;
    }

    if (res == 1 || res == 0)
        printf("%i", res);
    //------------------SEGUNDO N�MERO DE INTENTO-----------------------------
    if (intento2 == num2) {
        res = 1;
    } else if (intento2 == num1) {
        res = 0;
    } else if (intento2 == num3) {
        res = 0;
    } else {
        res = 2;
    }

    if (res == 1 || res == 0)
        printf("%i", res);

    //------------------TERCER N�MERO DE INTENTO------------------------------
    if (intento3 == num3) {
        res = 1;
    } else if (intento3 == num2) {
        res = 0;
    } else if (intento3 == num1) {
        res = 0;
    } else {
        res = 2;
    }

    if (res == 1 || res == 0)
        printf("%i", res);


    return 0;
}


void crearCombinacion(void){
    srand(time(NULL));
    num1();
    num2();
    num3();
    //prueba para conocer la combinaci�n
    //printf("%i %i %i", num1(), num2(), num3());
}


int intento1() {
    int intento;
    scanf("%i", &intento);

    return intento;
}

int intento2() {
    int intento;
    scanf("%i", &intento);

    return intento;
}

int intento3() {
    int intento;
    scanf("%i", &intento);

    return intento;
}


int num1() {

    int randomnumber;
    randomnumber = rand() % 10;

    return randomnumber;

}

int num2() {

    int randomnumber;
    randomnumber = rand() % 10;

    return randomnumber;

}

int num3() {

    int randomnumber;
    randomnumber = rand() % 10;

    return randomnumber;

}
