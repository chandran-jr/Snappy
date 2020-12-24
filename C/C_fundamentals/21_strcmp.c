#include <stdio.h>
#include <string.h>

int main () {
	char str1[] = "Belajar C";
	char str2[] = "Belajar C";
	char str3[] = "belajar C";

  	// str1 sama dengan str2 (output 0)
	printf("%d\n", strcmp(str1, str2));
  
  	// str1 tidak sama dengan str3
	printf("%d\n", strcmp(str1, str3));
  
  	// str2 tidak sama dengan str3
	printf("%d\n", strcmp(str2, str3));
}