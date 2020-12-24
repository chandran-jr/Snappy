#include <stdio.h>

int main () {

	int c = 1350;
	float d = 3.14;

	int new_c = (int) d;
	float new_d = (float) c;

	printf("%d\n", new_c);
	printf("%f\n", new_d);

}