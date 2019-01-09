/*

Es un juego en el que simulas que tienes un empleo y tienes que llegar a
100k pesos o si mueres, pierdes.



*/

#include <stdio.h>

    int vivo = 1;
    int dinero = 1000;
    int dia = 1;
    int costo_depa = 1;
    int gasto_comida = 1;
    int ingresos = 1;
    int gastos = 1 + 1;
    int balance = 1 - 2;

    int accion_elegida;
    int avance_opciones = 1;

    float tiempo_disponible = (24 - 8 - (3 * 0.5) - 8);

    char finalizar_dia;



void Opciones(void) {
    if (avance_opciones == 1) {
        printf ("\n (1) salir a caminar (2hrs) \n");
        printf (" (2) ver televisión (2hrs) \n");
        printf (" (3) buscar trabajo como freelancer (Todas las horas restantes) \n");
    } else if (avance_opciones == 2) {
        printf ("\n (1) salir a caminar (2hrs) \n");
        printf (" (2) ver televisión (2hrs) \n");
        printf (" (3) buscar trabajo como freelancer (Todas las horas restantes) \n");
        printf (" (4) empezar un proyecto personal \n");
    }

    printf ("elijo la opcion: ");
    scanf ("%i", &accion_elegida);

    //OPCION 1
    if (accion_elegida == 1 && dia%75 == 0) {
        printf ("\n ¡EL GOBIERNO TE NECESITA! \n OBTIENES UN BONO DE $4,000 \n");
        dinero = dinero + 4000;
    }

    //OPCION 2
    if (accion_elegida == 2 && dia%2 == 0 &&  dia%3 != 0) {
        printf ("\n ENCONTRASTE UNA PROPIEDAD EN DESCUENTO... ¿Quieres comprarla? \n");
        printf ("Esta te proporcionara un aumento en tus ingresos de +$5 diarios y cuesta $80 \n");
        printf (" (1) Si \n (2) No \n");
        scanf ("%i", &accion_elegida);

        while (accion_elegida < 1 || accion_elegida > 2) {
            printf ("\n El numero insertado no es valido, por favor elije otro");
            scanf ("%i", &accion_elegida);
        }
        if (accion_elegida == 1) {
            dinero = dinero - 80;
            ingresos = ingresos + 5;
        }
    }


    // OPCION 3
    if (accion_elegida == 3 && dia%3 == 0) {
        printf("\n ENCONTRASTE TRABAJO COMO FREELANCER, HAS GANADO $4 \n");
        dinero = dinero + 4;
    } else if (accion_elegida == 3 && dia%3 != 0) {
        printf ("\n NO ENCONTRASTE TRABAJO COMO FREELANCER \n");
    }



}


void Finalizar_dia(void) {
    balance = ingresos - gastos;
    dinero = dinero + ingresos - gastos;
    dia = dia + 1;

    printf ("\n \n");
    system("pause");

}

void Eventualidades(void) {
    if (dia == 10) {
        printf ("\n TE DIO GRIPA... LAS MEDICINAS COSTARON $20 \n");
        dinero = dinero - 20;
        avance_opciones = avance_opciones + 1;
    }

    if (dia == 20) {
        printf ("\n TE CHOCARON... LAS REPARACIONES CUESTAN $100 \n");
        dinero = dinero - 100;
    }

    if (dia == 30) {
        printf ("\n TUVISTE UN HIJO... TUS GASTOS AUMENTAN EN $3 \n");
        gastos = gastos + 3;
    }

    if (dia == 40) {
        printf ("\n TE ENCONTRASTE UN BILLETE DE $300 \n");
        dinero = dinero + 300;
    }

    if (dia == 50) {
        printf("\n TE DIVORCIASTE... PIERDES LA MITAD DE TU DINERO \n");
        dinero = dinero/2;
    }

    if (dia == 100) {
        printf("\n TE DISPARARON... ESTAS MUERTO. \n");
        printf("FIN DEL JUEGO \n \n \n");
        vivo = 0;
    }


}


int main () {



    printf ("Bienvenido... Esta es la situacion: \n");
    printf ("tienes ahorrados $1000 \n");
    printf ("tienes un empleo en el que recibes $1 por dia (turno) \n");
    printf ("vives en un departamento en el cual tu renta es de $1 por dia \n");
    printf ("tus gastos de comida diarios son de $1 \n");
    printf ("tu dia consta de 24 hrs, tu decides como administrar tu día \n");
    printf ("dormir te toma 8 hrs diarias \n");
    printf ("comer te toma 0.5 horas diarias y tienes 3 al dia \n");
    printf ("llegar al trabajo te toma 1 hr \n");
    printf ("tu trabajo te toma 8 hrs diarias \n");

    printf (" \n \n ------------------- Inicio----------------------- \n");

    while (vivo == 1){



            printf ("\n \n --------------- DIA %i -------------------- \n", dia);

            Eventualidades();

            printf ("dinero: $ %i \n", dinero);
            printf ("ingresos: +$ %i (al dia) \n", ingresos);
            printf ("gastos: $ %i \n", gastos);
            printf ("balance: + ( %i ) \n", balance);
            printf ("tiempo restante: %f hrs \n \n \n", tiempo_disponible);

            printf ("¿Que deseas hacer con tu tiempo restante del dia? \n");
            printf ("(solo podras realizar una accion por dia) \n");

            Opciones();

            Finalizar_dia();



    }


    return 0;

}

