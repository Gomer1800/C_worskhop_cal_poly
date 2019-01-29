#include <stdio.h>

// Several data types
// Integers (char, int, short, long, long long)
// Unsigned Integers (unsigned char, unsigned short, unsigned long, unsigned long long)
// floating point or real numbers (float, double)
// Structures

// char [-128,128] 8bit signed
// long [-2^31, 2^31] , but recall that the extra bit is the sign bit

// Boolean does not exist in C
// #define BOOL char;
// #define FALSE 0;
// #define TRUE 1;

// C uses arrays of char to define strings
int main() {
	int a = 0, b = 1, c = 2, d = 3, e = 4;
	a = b - c + d * e;
	printf("%d\n", a);
	printf("Press enter to continue...\n");
	getchar();
	return 0;
}