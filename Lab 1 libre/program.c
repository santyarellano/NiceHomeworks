#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int anoNacimiento = 0;
    int mesNacimiento = 0;
    int anosVida = 0;
    int mesesVida = 0;
    int anosEsperanza = 0;
    int contador = 9999999999999;
    int esperanzaVida = 97;
    int fechaMuerte = 0;

    int respuesta;

    printf ("¡Saludos! Yo soy la fase 1 del programa de Quiromancia automatizada... \n Vamos a leer tu futuro... \n Por favor introduce el año en que naciste \n");

    scanf ("%i", &anoNacimiento);

    printf ("\n ...Ahora, por favor introduce el numero del mes en que naciste \n");

    scanf ("%i", &mesNacimiento);

    anosVida = 2017 - anoNacimiento;
    mesesVida = 9 - mesNacimiento;

    printf ("\n ¡vaya! ...¡Parece que tienes %i años de vida y %i meses de vida aproximadamente! \n", anosVida, mesesVida);

    printf ("\n ¿De casualidad fumas? (1)si, (0)no \n");

    scanf("%i", &respuesta);

    if (respuesta == '1') {
        esperanzaVida = esperanzaVida - 10;
    }

    printf("\n ¿haces deporte? (1)si, (0)no \n");
    scanf ("%i", &respuesta);

    if (respuesta == 1) {
        esperanzaVida = esperanzaVida + 2;
    }

    printf("\n ¿tomas mucho alcohol? (1)si, (0)no \n");
    scanf("%i", &respuesta);

    if (respuesta == 1){
        esperanzaVida = esperanzaVida - 5;
    }

    printf("\n y finalmente... ¿comes saludable? (1)si, (0)no \n");
    scanf("%i", &respuesta);

    if (respuesta == 1){
        esperanzaVida = esperanzaVida + 5;
    }


    fechaMuerte = anoNacimiento + esperanzaVida;



    printf ("\n Bueno... deja calculo tu futuro \n");

    while (contador > 0) {

        contador--;

    }

    contador = 99999;

    while (contador > 0) {
        printf ("001");
        contador--;
    }

    contador = 999999999;
    while (contador > 0) {
        contador--;
    }

    printf("\n \n \n vas ");

    contador = 99999999;
    while (contador > 0) {
        contador--;
    }
    printf("a");

    contador = 99999999;
    while (contador > 0) {
        contador--;
    }
    printf(" m");

    contador = 99999999;
    while (contador > 0) {
        contador--;
    }
    printf("o");

    contador = 99999999;
    while (contador > 0) {
        contador--;
    }
    printf("r");

    contador = 99999999;
    while (contador > 0) {
        contador--;
    }
    printf("i");

    contador = 99999999;
    while (contador > 0) {
        contador--;
    }
    printf("r");

    contador = 99999999;
    while (contador > 0) {
        contador--;
    }
    printf(".");

    contador = 999999999;
    while (contador > 0) {
        contador--;
    }
    printf(".");

    contador = 999999999;
    while (contador > 0) {
        contador--;
    }
    printf(".");

    contador = 999999999;
    while (contador > 0) {
        contador--;
    }
    printf("\n a los %i en el año %i.", esperanzaVida, fechaMuerte);

    contador = 9991999999;
    while (contador > 0) {
        contador--;
    }

    printf("\n Disfruta de tu vida, adios");

    contador = 9919999999;
    while (contador > 0) {
        contador--;
    }

    printf ("\n \n \n \n");

    return 0;

}
