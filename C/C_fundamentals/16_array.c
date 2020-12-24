#include <stdio.h>
#include <string.h>

int main () {
	// Deklarasi array
    int angka[] = {1, 2, 3, 4, 5, 6,7, 8, 9, 10};
	
    // Mencari tahu ukuran array
	int angka_len = sizeof(angka) / sizeof(angka[0]);
	
    // Mengeluarkan nilai index array satu per satu lewat loop
	for (int i = 0; i < angka_len; i++)
	{
		printf("%d\n", angka[i]);
	}
}