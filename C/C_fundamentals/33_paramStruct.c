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

void printUser(struct Users *user)
{
	printf ("username: %s\n", user->username);
	printf ("email: %s\n", user->email);
	printf ("dob: %s\n", user->dob);
	printf ("age: %d\n", user->age);
	printf ("phone: %s\n", user->phone);
}

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

	printUser(&user1);
	printUser(&user2);
}