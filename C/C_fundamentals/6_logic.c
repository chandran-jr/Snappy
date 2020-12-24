// logical operator

#include <stdio.h>

int main () {

	int x = 10;
	int y = 20;
	
    // Disini kita mencoba mengecek rentang nilai x
	if (x > 5 && x < 15)
	{
		printf("Angka berada di atas 5 dan di bawah 15\n");
	}
	
	// Disini kita mencoba mengecek rentang nilai y
	if (y < 5 || y > 15)
	{
		printf("Angka berada di atas 15 atau di bawah 5\n");
	}

}