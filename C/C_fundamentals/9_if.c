#include <stdio.h>

int main () {
	
    // Untuk latihan coba ganti nilai x, output akan berbeda
	int x = 90;
	
    // Mengecek nilai x
	if (x > 80)
	{
		printf("Selamat, kamu dapat nilai A!\n");
	}
	else if (x > 70 && x <= 80)
	{
		printf("Selamat, kamu dapat nilai B!\n");
	}
	else if (x > 60 && x <= 70)
	{
		printf("Selamat, kamu dapat nilai C!\n");
	}
	else if (x > 45 && x <= 60)
	{
		printf("Selamat, kamu dapat nilai D!\n");
	}
	else
	{
		printf("Selamat, kamu dapat nilai E. Remedial yah!\n");
	}
}