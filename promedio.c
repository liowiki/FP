#include <stdio.h>
int main(){
	float c1,c2,c3,c4,c5;
	float prom;
	int matricula;
	printf("Introduce c1\n");
	scanf("%f", &c1);
	printf("Introduce c2\n");
        scanf("%f", &c2);
	printf("Introduce c3\n");
        scanf("%f", &c3);
	printf("Introduce c4\n");
        scanf("%f", &c4);
	printf("Introduce c5\n");
        scanf("%f", &c5);
	printf("Introduce tu matricula");
	scanf("%d", &matricula);
	prom = (c1+c2+c3+c4+c5)/5;
	printf("\n %d sacaste %f\n" ,matricula, prom);
	if (prom>=7){
		printf("Aprobaste");
	}else{
		printf("Suerte para la proxima");
	}
	return 0;



}
