// Include libraries
// - compiler libraries
#include <stdio.h>
#include <time.h>
// - external libraries
#include "functions.h"
#include "numbers.h"

// Declare constants

/*-------------- MAIN ---------------*/
int main(){
	// Declare variables
	int option, playing, dificulty, number, guess, i;

	// Initialize variables
	option = 0;
	playing = 0;
	dificulty = 0;
	number = 0;
	guess = 0;

	// Main loop
	do{
		// Print menu
		print_menu();

		// Receive answer
		scanf("%i", &option);

		//- - - - - - Evaluate anser - - - - - - -
		//- -  1. Game loop
		if (option == 1) {
			playing = 1;

			printf("Dificulty? (from 1 to 10) ");
			scanf("%i", &dificulty);
			// Print instructions
			printf(
				"Now... a random number will be generated within a range from 0 to the dificulty you selected.\n"
				"You will have 5 chances to find out what is the number.\n"
				"In each turn you must try to guess the number and you will receive a (+) if your number is bigger to the number " 
				"or a (-) in case your number is smaller.\n"
				"Good luck... noob.\n"
			);

			// Initialize the number
			number = random_number(dificulty);
			i = 1;
			while (playing == 1) {
				printf("Guess %i: ", i);
				scanf("%i", &guess);

				switch (check(guess, number))
				{
				case 0: 
					printf("\nYou have won!\n");
					playing = 0;
					break;
				case 1:
					printf(" + \n");
					break;
				case -1:
					printf(" - \n");
					break;
				default:
					printf("\n Error 1 \n");
					break;
				}

				i++;

				if (i >= 6) {
					printf("\nYou have lost!\n");
					playing = 0;
				}
			}
		}

		// - - 2. Quit
	} while (option != 2);

	// Return value
	return 0;
}
/*---------- END OF MAIN ------------*/