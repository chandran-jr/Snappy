#include <stdio.h>
#include <string.h>

struct Users
{
	char username[50];
	char email [50];
	char phone [20];
};

struct Users createUser(char username[], char email[], char phone[])
{
	struct Users u;

	strcpy(u.username, username);
	strcpy(u.email, email);
	strcpy(u.phone, phone);

	return u;
}

void printUser(struct Users *user)
{
	printf ("username: %s\n", user->username);
	printf ("email: %s\n", user->email);
	printf ("phone: %s\n", user->phone);
}


int main () {

	struct Users user1;

	user1 = createUser("kresnagaluh", "kresna@codepolitan.com", "7501234");

	printUser(&user1);
}