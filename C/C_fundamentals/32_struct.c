// Struct adalah sebuah cara untuk membuat tipe data yang sangat 
// kompleks dimana tidak hanya memiliki satu tipe data saja.

// Bila di OOP kita dapat mengenal yang namanya class, hanya saja 
// struct merupakan class tanpa method jadi hanya berisi atributnya saja. 
// Struct digunakan bila kita nantinya ingin mengemas beberapa data sekaligus 
// dalam satu wadah.

// Kamu dapat mengisi setiap atribut yang ada pada struct dengan 
// nilai, kemudian dapat dikeluarkan lagi untuk diproses ataupun 
// dicetak saja.

#include <stdio.h>
#include <string.h>

struct Users
{
	char username[50];
	char email [50];
	char dob [20];
	int age;
	char phone [20];
};

int main () {

	struct Users user1;
	struct Users user2;

	strcpy(user1.username, "kresnagaluh");
	strcpy(user1.email, "kresna@codepolitan.com");
	strcpy(user1.dob, "1970-09-09");
	strcpy(user1.phone, "7501234");
	user1.age = 25;

	strcpy(user2.username, "tonisamba");
	strcpy(user2.email, "toni@codepolitan.com");
	strcpy(user2.dob, "1970-09-09");
	strcpy(user2.phone, "7501235");
	user2.age = 27;

	printf ("%s, %s, %s, %s, %d\n", user1.username, user1.email, user1.dob, user1.phone, user1.age);
	printf ("%s, %s, %s, %s, %d\n", user2.username, user2.email, user2.dob, user2.phone, user2.age);

}