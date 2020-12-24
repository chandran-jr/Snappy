#include <stdio.h>

int main () {

	/** 
     * Mengisi i dengan 0 di awal, naikan terus nilai i selama i kurang dari 10.
     * Di setiap loop nilai i akan bertambah.
	 */
	for (int i = 0; i < 10; i++)
	{
    	// Cetak nilai i nya.
		printf ("%d\n", i);
	}

	printf("\n");

	for (int i = 10; i > 0; i--)
	{
		printf ("%d\n", i);
	}

}