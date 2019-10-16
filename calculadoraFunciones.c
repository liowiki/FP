#include <stdio.h>

void suma(int a, int b);
void resta(int a, int b);
void multiplicacion(int a, int b);
void division(int a, int b);

int main(){

	int opcion=0;
	int valorUno;
	int valorDos;
	printf("calculadora de dos numeros\n");
	while (opcion != 5){
		printf("Elije una opcion\n1)Suma\n2)Resta\n3)Multiplicacion\n4)Division\n5)Salir\n");
        scanf("%d", &opcion);
		if (opcion == 5){
			printf("Hasta Luego\n");
			return 0;
		}
		printf("dame el primer numero\n");
		scanf("%d", &valorUno);
		printf("dame el segundo numero\n");
		scanf("%d", &valorDos);
		switch(opcion){
			case 1:
				suma(valorUno, valorDos);
				break;
			case 2:
				resta(valorUno, valorDos);
				break;
			case 3:
				multiplicacion(valorUno, valorDos);
				break;
			case 4:
				division(valorUno, valorDos);
				break;
			default:
				printf("opcion incorrecta\n");
				break;
		}
		printf("\n");
	}
	return 0;
}

void suma(int a, int b){
    printf("el resultado es: %d\n", a + b);
	return;
}
void resta(int a, int b){
    printf("el resultado es: %d\n", a - b);
	return;
}
void multiplicacion(int a, int b){
    printf("el resultado es: %d\n", a * b);
	return;
}
void division(int a, int b){
	if (b!=0){
		printf("el resultado es: %d\n", a / b);
	}else{
		printf("division entre cero, tu equipo sera formateado\n");
	}
	return;
}

