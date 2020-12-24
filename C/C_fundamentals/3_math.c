// arithmetics

#include <stdio.h>

int main () {

	int x = 10;
	int y = 20;

	int result = x + y;
	printf("%d\n", result);

	result = x - y;
	printf("%d\n", result);

	result = x / y;
	printf("%d\n", result);

	result = x * y;
	printf("%d\n", result);

	result = y % x;
	printf("%d\n", result);

	x++;
	printf("%d\n", x);

	y--;
	printf("%d\n", y);

}