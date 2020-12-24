// Operator bitwise 

#include <stdio.h>

int main () {

	int x = 63;
	int y = 13;

	printf ("x & y = %d\n", x & y);
	printf ("x | y = %d\n", x | y);
	printf ("x ^ y = %d\n", x ^ y);
	printf ("~x = %d\n", ~x);
	printf ("~y = %d\n", ~y);
	printf ("x >> 2 = %d\n", x >> 2);
	printf ("x << 2 = %d\n", x << 2);

}

// Operator bitwise digunakan untuk menangani operasi bit 
// pada suatu bilangan dalam representasi biner. Misal seperti 
// berikut:

// 63  // bila menjadi biner adalah 0011 1100
// 13  // bila menjadi biner adalah 0000 1101

// # AND
// 0011 1100
// 0000 1101
// ---------
// 0000 1100

// #OR 
// 0011 1100
// 0000 1101
// ---------
// 0011 1101

// #XOR
// 0011 1100
// 0000 1101
// ---------
// 0011 0001

// #Negasi

// 0011 1100
// ---------
// 1100 0011

// # >> 2

// 0011 1100
// ---------
// 0000 1111

// # 2 <<

// 0011 1100
// ---------
// 1111 0000
// Operator bitwise yang harus kamu ingat di C antara lain:

// &, melakukan operasi AND terhadap dua bilangan biner
// |, melakukan operasi OR terhadap dua bilangan biner
// ~, melakukan operasi negasi terhadap bilangan biner
// ^, melakukan operasi XOR terhadap dua bilangan biner
// >>, melakukan operasi penggeseran bit ke kanan terhadap bilangan biner
// <<, melakukan operasi penggeseran bit ke kiri terhadap bilangan biner