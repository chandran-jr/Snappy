#include <stdio.h>

int main () {

	int x = 10;

	// Mencoba menyatakan pointer
	int* y;
	
	// Mengambil alamat pointer
	y = &x;
	
    // Mencoba ternary operator, gaya ternary ini juga persis seperti di PHP
	int c = x == 10 ? 1 : 0;
	
	// Mencetak output
	printf("size of x: %lu\n", sizeof(x));
	printf("address of x: %p\n", &x);
	printf("address of y: %p\n", y);
	printf("y: %d\n", *y);
	printf("c: %d\n", c);

}