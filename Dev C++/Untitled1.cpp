#include <stdio.h>
int main () {
	char name[50], email[50];
	
	printf("nama: ");
	fgets(name, seizeof(name), stdin);
	printf("Email: ");
	fgets(email, sizeof(email), stdin);
	
	
}
