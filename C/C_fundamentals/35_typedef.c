// Memang agak boros juga bila kita harus selalu mengetik "struct Users" 
// di setiap bagian kode seperti pada parameter function, menulis 
// function, dan membuat variabel struct.

// Oleh karena itu kita dapat menggunakan typedef yang dapat 
// meringkas penulisan tersebut menjadi nama yang ditentukan pada 
// typedef.

#include <stdio.h>
#include <string.h>

typedef struct Users
{
	char username[50];
	char email [50];
	char phone [20];
} User;

User createUser(char username[], char email[], char phone[])
{
	User u;

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

	User user1;

	user1 = createUser("kresnagaluh", "kresna@codepolitan.com", "7501234");

	printUser(&user1);
}