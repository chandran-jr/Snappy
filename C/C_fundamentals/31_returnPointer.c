#include <stdio.h>

int * modifyValue(int *val) 
{
	*val += 1000;

	return val;
}

void printValue(int *val) 
{
	printf("address of val: %p\n", val);
	printf("val: %d\n", *val);
}

int main () {

	int x = 10;
	int* y;

	y = &x;

	printValue(y);

	int* m = modifyValue(&x);

	printValue(m);

	int* n = modifyValue(y);

	printValue(n);
}