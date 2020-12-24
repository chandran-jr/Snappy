#include <stdio.h>

int hitung_luas(panjang, lebar)
{
	int hasil = panjang * lebar;
	printf("result: %d\n", hasil);
}

int main () {
	hitung_luas(4, 4);
}