// Generate random number within a range
int random_number(int range){
	// Declare variables
	int number;

	// Seed
	srand(time(NULL));

	// Initialize number
	number = rand();

	// Range
	number %= range;

	// Return value
	return number;
}