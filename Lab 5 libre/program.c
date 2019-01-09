#include "biblioteca.h"

int main() {

    int isPlaying = 1;
    int turno = 1;
    int var1, var2, var3;
    int sec1 = num1(), sec2 = num2(), sec3 = num3();

    presentacion();
    crearCombinacion();

    sec1 = num1();
    sec2 = num2();
    sec3 = num3();

    while (isPlaying == 1) {
        printf("\n -------------------turno %i---------------------------- \n", turno);


        var1 = intento1();
        var2 = intento2();
        var3 = intento3();

        checarCombinacion(sec1, sec2, sec3, var1, var2, var3);


        turno++;

        if (turno > 10) {
            printf("\n ----------------------------FIN DEL JUEGO------------------------------------------- \n");
            printf("\n la combinacion es: ");
            printf("%i %i %i", sec1, sec2, sec3);
            isPlaying = 0;
        }

    }


    printf("\n \n \n");
    return 0;
}
