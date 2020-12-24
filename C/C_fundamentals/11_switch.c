#include <stdio.h>

int main () {
	
    // Isi x dengan nilai 'w', coba ganti nilai x supaya mendapat hasil yang berbeda
	char x = 'w';
	
    // Mari kita coba switch.
	switch(x)
	{
    	// Kalau x bernilai 'w'
		case 'w':
			printf("Karakter maju ke depan!\n");
		break;
		
        // Kalau x bernilai 's'
		case 's':
			printf("Karakter mundur ke belakang!\n");
		break;
		case 'a':
			printf("Karakter bergerak ke kiri\n");
		break;
		case 'd':
			printf("Karakter begerak ke kanan!\n");
		break;
		default:
			printf("Karakter diam dan tidak bergerak!\n");
	}
}