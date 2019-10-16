#include <stdio.h>
int main(){
	int edad;
	printf( "Cuantos anios tienes??\n" );
	scanf ( "%i", &edad );
	fflush(stdin);
	printf( "Tu edad: es %i\n", edad );
	return 0;
}

