// operator comparison

#include <stdio.h>

int main () {

	int x = 10;
	int y = 20;
	
	int result = x > y;
	
	// Output yang muncul adalah nilai boolean true/1 atau false/0
    printf("%d\n", result);

	result = x < y;
	printf("%d\n", result);

	result = x >= y;
	printf("%d\n", result);

	result = x <= y;
	printf("%d\n", result);

	result = y == x;
	printf("%d\n", result);

	result = y != x;
	printf("%d\n", result);

}