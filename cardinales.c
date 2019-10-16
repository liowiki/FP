#include <stdio.h>

int main(){
	char puntoCard;
	printf("dime donde vives\nN\tS\tE\tO\n");
	scanf("%c", &puntoCard);
	switch (puntoCard){
	case 'N':
		printf("Vives en Azcapo\n");
		break;

	case 'S':
		printf("Vienes del pueblo de Milpalta\n");
		break;
	case 'E':
		printf("Hola fifi\n");
		break;
	case 'O':
		printf("Porfas, no me mates\n");
		break;
	default:
		printf("Eres civilizado\n");
		break;
	}
	return 0;
}
