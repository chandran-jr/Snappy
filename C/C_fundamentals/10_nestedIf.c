#include <stdio.h>

int main () {
	
    // Mengisi x dengan 91
	int x = 91;
	
    // Mengecek nilai x
	if (x > 80)
	{
    	// Statement dibawah ini akan dikerjakan jika x lebih besar dari 80.
		printf("Selamat, kamu dapat nilai A!\n");

		if (x >= 95)
		{
			printf("Selamat, kamu dapat voucher gratis untuk beli buku di Palasari!\n");
		}
		else if (x > 90 && x < 95)
		{
			printf("Selamat, kamu dapat voucher gratis untuk beli cendol!\n");
		}
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