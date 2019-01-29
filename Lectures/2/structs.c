/*
Created by Luis Gomez for Cal Poly C, C++ Workshop
Lecture 2: Arrays, Pointers, Structs
*/
#include <stdio.h>
// EXAMPLE 3 STRUCTURES
// lets declare a simple struct, for a person
struct person
{
	char* first_name;
	char* last_name;
	int lucky_number;
};

int main() {
	struct person my_person;
	my_person.first_name = "Luis";
	my_person.last_name = "Gomez";
	my_person.lucky_number = 17;

	printf("\nHello my name is %s %s and my lucky number is %i\n", my_person.first_name, my_person.last_name, my_person.lucky_number);
	system("PAUSE");
}