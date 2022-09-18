#include <stdio.h>
int main () {
	// membuat variable
	char name[20], alamat[30] ;
	
	printf ("Nama: ") ;
	scanf("%s", &name) ; 
	
	printf("Almat Domisili: ") ;
	scanf("%s", alamat) ;
	
	printf ("\n-------------------------\n") ;
	printf ("Nama yang diinputkan: %s\n", name) ;
	printf ("Alamat Domisili yang diinputkan: %s\n", name) ;
	return 0 ;
}
