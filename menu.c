#include <stdio.h>

int suma();
int resta();
int multiplicacion();
int division();

int main(){

	int opcion=1;
	int seleccion;
	int calculo;

	while (opcion){
		printf("Bienvenido a la caluculadora de FP14\n");
		printf("selecciona una opcion\n");
		printf("1) Suma\n2) Resta\n3) Multiplicacion\n");
		printf("4) Divicion\n5) Salir");
		fflush(stdin);
		scanf("%d", &seleccion);
		switch (seleccion){
			case 1:
				calculo = suma();
				break;
			case 2:
				printf("Resta\n");
				break;
			case 3:
				printf("Multiplicacion\n");
				break;
			case 4:
				printf("Division\n");
				break;
			case 5:
				printf("Gracias por usar la calculadora\n");
				opcion = 0;
				break;
			default:
				printf("Respuesta Incorrecta\n");
				break;
		}

	}
	return 0;
}

int suma (){
	printf("esta funcion realiza una suma\n");
	return 0;

}
