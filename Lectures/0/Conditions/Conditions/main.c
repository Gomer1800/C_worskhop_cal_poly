#include <stdio.h>

int main() {
	void guessNumber(int);

	guessNumber(500);
	guessNumber(600);
	guessNumber(555);

	printf("\nPress Enter to continue...");
	getchar();
	return 0;
}

void guessNumber(int guess) {
	if (guess == 555) {
		printf("\nCorrect. You guessed it!");
	}
	else if (guess > 555) {
		printf("\nYour guess is too high.");
	}
	else printf("\nYour guess is too low.");
}