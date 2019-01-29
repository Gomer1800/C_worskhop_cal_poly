#include <stdio.h> // pre-processor directive
#pragma warning(disable:4996)

// Function Prototypes AKA function declarations, 
// defines the function interface for compiler, iplemenation defined later
void sum(float a, float b);
void subtract(float a, float b);
void divide(double a, double b);
void multiply(double a, double b);


// Main code block
int main() {
	printf("\t\tC Calculator\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Division\n");
	printf("4. Multiplication\n");
	printf("\nType a number: ");

	int choice = 0;
	scanf("%d", &choice); 
	// scanf reads formatted intput from stdin, it is a clu
	// %d is a placeholder for the reference to int choice
	// %i is valid too, but allows for hex & octal input with the right formatting

	if (choice == 1) { // Addition
		printf("\nChoose first number: ");
		float x = 0;
		scanf("%f", &x); 

		printf("\nChoose second number: ");
		float y = 0;
		scanf("%f", &y);

		sum(x, y); // function call
	}
	else if (choice == 2) { // subtraction
		printf("Choose first num: ");
		float x = 0;
		scanf("%f", &x);

		printf("Choose second num: ");
		float y = 0;
		scanf("%f", &y);

		subtract(x, y);
	}
	else if (choice == 3) { // division
		printf("\nDividend: ");
		double x = 0;
		scanf("%lf", &x); // lf

		printf("\nDivisor: ");
		double y = 1;
		int not_Valid = 1;

		while (not_Valid == 1) {
			scanf("%lf", &y);
			if (y == 0) {
				printf("\nCannot divide by zero, enter new divisor: ");
			}
			else not_Valid = 0;
		}
		divide(x, y);
	}
	else if (choice == 4) { // multiplication
		printf("Choose first num: ");
		double x = 0;
		scanf("%lf", &x);

		printf("Choose second num: ");
		double y = 0;
		scanf("%lf", &y);

		multiply(x, y);
	}
	else printf("Input not recognized. Goodbye...");
	system("PAUSE");
	//return 0;
}

void sum(float a, float b) {
	float c = a + b;
	printf("%f + %f = %f\n", a, b, c);
}

void subtract(float a, float b) {
	float c = a - b;
	printf("%f - %f = %f\n", a, b, c);
}

void divide(double a, double b) {
	double c = a / b;
	printf("%lf / %lf = %lf\n", a, b, c);
}

void multiply(double a, double b) {
	double c = a * b;
	printf("%lf * %lf = %lf\n", a, b, c);
}