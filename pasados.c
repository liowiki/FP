#include <stdio.h>

int main(){
	int calificacion;
	printf("Dame tu la calificacion del alumno\n");
	fflush(stdin);
	scanf("%d", &calificacion);
	if (calificacion > 10){
		printf("Hackeaste el sistema\n");
		return 0;
	}
	switch (calificacion){
		case 10:
			printf("Alumno Sobresaliente\n");
			break;
		case 9:
			printf("Alumno exelente\n");
			break;
		case 8:
			printf("Alumno muy bueno\n");
			break;
		case 7:
			printf("Alumno bueno\n");
			break;
		default:
			printf("presentas examen final, tu puedes\n");
			break;
	}
	return 0;
}
