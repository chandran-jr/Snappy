#include <stdio.h>
#include <string.h>

int main () {
	// Mendeklarasikan array
	int angka[] = {1, 2, 3, 4, 5};
	char huruf[sizeof(angka)] = {'a', 'b', 'c', 'd', 'e'};
	char ipsum[] = "Lorem ipsum sit dolor amet";
	char ipsum2[sizeof(ipsum)];
	char ipsum3[] = "Lorem ipsum";

	strcpy(ipsum2, ipsum);

	printf("%lu\n", sizeof(angka));
	printf("%lu\n", strlen(huruf));
	printf("%lu\n", strlen(ipsum));
	printf("%lu\n", strlen(ipsum2));
	printf("%lu\n", strlen(ipsum3));
}