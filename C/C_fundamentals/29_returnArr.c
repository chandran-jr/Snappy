#include <stdio.h>
#include <string.h>

int * modifyArray(int *arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = arr[i] * 100;
	}

	return arr;
}

void printArray(int *arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main () {
	int angka[10] = {1, 2, 3, 4, 5, 6,7, 8, 9, 10};
	int angka_len = 10;

	int *new_angka;
	new_angka = modifyArray(angka, angka_len);

	printArray(new_angka, angka_len);
}