// Print menu
void print_menu(){
	printf(
		"\n"
		"Menu: \n"
		"1. Play\n"
		"2. Quit\n"
		);
}

// Compare numbers and check is smaller or bigger (smaller = -1, bigger = 1, equal = 0)
int check(int guess, int number) {
	int res = 0;
	if (guess == number) { res = 0; } // equal
	else if (guess > number) { res = 1; }  // bigger
	else if (guess < number) { res = -1; } // smaller

	return res;
}