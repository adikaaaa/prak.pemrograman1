#include <stdio.h>
int main () {
	// membuat variable
	char name[20] ;
	
	printf ("Nama: ") ;
	scanf ("%[^\n]s", name) ;
	
	printf("Nama: ") ;
	scanf("%[^\n]s", name) ;
}
