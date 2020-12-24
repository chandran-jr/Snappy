#include <stdio.h>

void printValue(int *val) 
{
	printf("address of val: %p\n", val);
	printf("val: %d\n", *val);
}

int main () {

	int x = 10;
	int* y;

	y = &x;

	printValue(&x);
	printValue(y);
}