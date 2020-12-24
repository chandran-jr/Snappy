#include <stdio.h>

int main () {

	int x = 10;
	int* y;
	int** z;

	y = &x;
	z = &y;

	printf("BEFORE\n\n");

	printf("size of x: %lu\n", sizeof(x));
	printf("address of x: %p\n", &x);
	printf("x: %d\n", x);

	printf("address of y: %p\n", y);
	printf("y: %d\n", *y);

	printf("address of z: %p\n", z);
	printf("z: %d\n", **z);

	printf("\nAFTER\n\n");

	x = 12345;

	printf("address of x: %p\n", &x);
	printf("x: %d\n", x);

	printf("address of y: %p\n", y);
	printf("y: %d\n", *y);

	printf("address of z: %p\n", z);
	printf("z: %d\n", **z);

}

// Tidak hanya menunjuk sebuah variabel, kamu juga dapat menunjuk 
// pointer dengan pointer. Caranya agak sedikit berbeda dimana kamu 
// dapat menggunakan tanda ** untuk membuat variabel yang dapat 
// menujuk pointer. Suatu pointer berubah isinya, jika variabel 
// yang ditunjuknya ikut berubah.