#include <stdio.h>

int main () {

	int x = 10;
	int* y;

	y = &x;

	printf("size of x: %lu\n", sizeof(x));
	printf("address of x: %p\n", &x);
	printf("address of y: %p\n", y);
	printf("y: %d\n", *y);
}

// Pointer adalah sebuah variabel yang menyimpan alamat dari suatu 
// variabel lain. Dengan menggunakan tanda * maka kita dapat 
// menyatakan bahwa variabel tersebut adalah pointer dengan tipe 
// data tertentu. 

// Kemudian untuk mendapatkan suatu alamat pointer, kamu dapat 
// menggunakan tanda & di depan nama variabel yang akan ditunjuk 
// oleh pointer.

// Untuk menampilkan alamat pointer, kamu dapat menggunakan tanda 
// %p saat mencetaknya menggunakan printf(). Sedangkan untuk 
// mencetak isi variabel yang ditunjuk oleh pointer, dapat kamu 
// gunakan tanda didepan nama variabel pointer*.