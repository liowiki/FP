#include <stdio.h>

int main(){
	int base, altura;
	float superficie;
	printf("Dame el valor de la base\n");
	scanf("%d", &base);
	printf("Dame el valor de la altura\n");
	scanf("%d", &altura);
	superficie = (base * altura)/2;
	printf("\nel area es: %f\n", superficie);
	return 0;
}
