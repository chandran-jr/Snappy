#include <stdio.h>
#include <string.h>

void printArray(int *arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main () {
	int angka[] = {1, 2, 3, 4, 5, 6,7, 8, 9, 10};
	int angka_len = sizeof(angka) / sizeof(angka[0]);

	printArray(angka, angka_len);
}