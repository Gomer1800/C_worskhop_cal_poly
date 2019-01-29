#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

int main() {
	char * first_name = "John";
	char last_name [] = "Doe";
	char name[100] ;

	last_name[0] = 'B';
	sprintf(name, "%s %s", first_name, last_name);
	if (strncmp(name, "John Boe", 100) == 0) {
		printf("Done!\n");
	}
	name[0] = '\0'; // termination character for strings
	strncat(name, first_name, 4);
	strncat(name, last_name, 20);
	printf("%s\n", name);

	system("pause");
	return 0; // zero for success, one on failure
}