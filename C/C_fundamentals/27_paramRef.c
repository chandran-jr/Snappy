// Sebelumnya kita hanya melewatkan nilai dengan menggunakan konsep 
// by value. Artinya parameter yang dilewatkan tidak akan mengubah 
// variabel diatas blok kode yang memanggil suatu function.

// Tapi sekarang, kita akan memanggil function dengan by reference 
// yang artinya, pengubahan nilai di dalam suatu function dapat 
// berakibat mengubah nilai diatas blok kode yang memanggil function 
// tersebut.

// Singkatnya, nilai yang dilewatkan sebelum memanggil function akan 
// ikut berubah karena proses yang terjadi di function walaupun 
// function tidak mengembalikan nilai apa - apa.

#include <stdio.h>

void hello (int *x, int *y)
{
	*x = 100;
	*y = 200;
}

int main () {

	int x = 10;
	int y = 20;

	hello(&x, &y);

	printf ("x: %d\n", x);
	printf ("y: %d\n", y);
}