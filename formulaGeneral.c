#include <stdio.h>
#include <math.h>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int det = 0;
	int bNeg = 0;
	float raiz = 0.0;
	float resultado1 = 0.0;
	float resultado2 = 0.0;

	printf("programa que calcula la chicharronera\n");
	printf("ingresa a:");
	fflush(stdin);
	scanf("%d", &a);
	printf("\n ingresa b:");
	fflush(stdin);
        scanf("%d", &b);
	fflush(stdin);
	printf("\ningresa C");
        scanf("%d", &c);
	bNeg = b*(-1);
	det = (b*b)-(4*a*c);
	/*if (det >= 0 && a !=0){
		resultado1 = (bNeg + raiz)/(2*a);
                resultado2 = (bNeg - raiz)/(2*a);
                printf("el resultado es %d , %d");
                return 0; 

	}*/
	if (det >= 0){
		if (a != 0){
			raiz = sqrt(det);
			resultado1 = (bNeg + raiz)/(2*a);
			resultado2 = (bNeg - raiz)/(2*a);
			printf("el resultado es %f , %f", resultado1, resultado2);
			return 0; 
		}
	}
	printf("no se puede");
	return 0;
}
