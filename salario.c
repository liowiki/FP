#include <stdio.h>

void calculaSalario();
void calculaSalarioV(int salario, int horas);
void calculaSalarioR(int *ptrSalario, int *ptrHoras);

int main(){
	int salario;
	int horas;
	printf("Bienvenido al sistema de calculo de salarios\n");
	printf("ingresa el sueldo por hora\n");
	scanf("%d", &salario);
	printf("Ingresa las horas de trabajo a la semana\n");
	scanf("%d", &horas);
	calculaSalarioV(salario, horas);
	printf("Variable modificada V %d", salario);
	calculaSalarioR(&salario, &horas);
	printf("Variable modificada R %d", salario);
	return 0;
}

void calculaSalarioV(int salario, int horas){
	salario = 15;
	printf("El salario por mes es de : %d\n", horas*salario*4);
	return;
}

void calculaSalarioR(int *ptrSalario, int *ptrHoras){
    *ptrSalario = 15;
    printf("El salario por mes es de : %d\n", *ptrHoras * *ptrSalario * 4);
    return;
}

