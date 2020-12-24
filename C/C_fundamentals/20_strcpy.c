#include <stdio.h>
#include <string.h>

int main () {
	// Deklarasi string
	char ipsum[] = "Lorem ipsum sit dolor amet";
    // Menghitung panjang string
	char ipsum2[sizeof(ipsum)];
	
    // Mengcopy string asal ke tujuan
	strcpy(ipsum2, ipsum);
	
    // Mencetak string baru
	printf("%s\n", ipsum2);
}