// multidimensional array

#include <stdio.h>
#include <string.h>

int main () {
	int angka[3][10] = {
		{1, 2, 3, 4, 5, 6,7, 8, 9, 10},
		{2, 2, 3, 4, 5, 6,7, 8, 9, 10},
		{3, 2, 3, 4, 5, 6,7, 8, 9, 10},
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", angka[i][j]);
		}

		printf("\n");
	}
}