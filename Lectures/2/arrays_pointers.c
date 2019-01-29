/* 
Created by Luis Gomez, for Cal Poly C,C++ Workshop
Lecture 2: Arrays, Points, Structs
*/
#include <stdio.h>

int main() {
	// EXAMPLE 1 ARRAYS
	// <type> my_array [SIZE]
	int decimal_numbers [] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int my_int_array[10];

	// How to iterate over the elements of an array
	// Lets look at the memory addresses of each element
	const int SIZE = sizeof(decimal_numbers) / sizeof(int);
	for (int i = 0; i < SIZE; i++) {
		printf("Num %i address: %i\n", i+1, &decimal_numbers[i]);
	}

	// Is an empty array the same size as a populated one of the same type?
	printf("my_int_array size: %i bytes\tdecimal_numbers size: %i bytes\n\n", sizeof(my_int_array), sizeof(decimal_numbers));

	// EXAMPLE 2 POINTERS
	// lets create some null pointers
	double *empty = NULL;
	double *empty2 = NULL;

	// Are two pointers to null the same?
	if (empty == empty2)
		printf("address %i equals address %i\n\n", empty, empty2);
	else printf("address %i does not equal address %i\n\n", empty, empty2);

	// Lets set our pointers to something else...
	double PI = 3.14;
	double PI2 = 3.14;
	empty = &PI;
	empty2 = &PI2;
	// Are two pointers to an equal value the same?
	if (empty == empty2)
		printf("address %i ,equals address %i\n\n", empty, empty2);
	else printf("address %i , does not equal address %i\n\n", *empty, *empty2);
	// How about their values?
	if (*empty == *empty2)
		printf("%f at address %i ,equals %f at address %i\n\n", *empty, empty, *empty2, empty2);
	else printf("%f at address %i , does not equal %f at address %i\n\n", *empty, empty, *empty2, empty2);

	// Are two pointers to the same address the same?
	empty2 = &PI;
	if (empty == empty2)
		printf("address %i equals address %i\n\n", empty, empty2);
	else printf("address %i does not equal address %i\n\n", empty, empty2);

	system("PAUSE");
}