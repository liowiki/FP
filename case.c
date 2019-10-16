
#include <stdio.h>

int main(){
	int seleccion;
	while (seleccion !=5){
	printf("Selecciona una opcion\n");
	printf("1) imprime norte\n");
	printf("2) imprime sur\n");
	printf("3) imprime oriente\n");
	printf("4) imprime poniente\n");
	printf("5) salir\n");
	fflush(stdin);
	scanf("%d", &seleccion);
	switch(seleccion){
		case 1:
			printf("Azcapo\n");
			break;
		case 2:
                        printf("xochimilco\n");
                        break;
		case 3:
                        printf("iztapalapa\n");
                        break;
		case 4:
                        printf("cuajimalpa\n");
                        break;
		case 5:
			printf("adios\n");
			break;
		default:
			printf("Vives en marte\n");
			break;


	}
	}
return 0;

}
