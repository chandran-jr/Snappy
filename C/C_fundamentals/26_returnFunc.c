#include <stdio.h>

/**
 * Kegiatan return value / mengembalikan suatu nilai ini 
 * akan sering terpakai dalam pemrograman
 */

int hitung_luas(panjang, lebar)
{
	// Mengembalikan suatu nilai daripada langsung mencetak hasil
	return panjang * lebar;
}

int main () {

	int hasil = hitung_luas(10, 20);
	printf ("result: %d\n", hasil);

}