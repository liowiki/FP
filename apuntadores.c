#include <stdio.h>

int main(){
	int edad;
	int *ptrEdad;
	ptrEdad = &edad;
	edad = 18;
	printf("0x%x\n", ptrEdad );
	printf("%d\n",*ptrEdad);
	*ptrEdad = 20;
	printf("la variable edad es: %d\n", edad);
	return 0;
}
