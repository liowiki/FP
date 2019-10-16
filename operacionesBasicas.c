#include <stdio.h>

int Suma (int sumando1, int sumando2);
int Resta (int minuendo, int sustraendo);
int Multiplicacion(int multiplicando, int multiplicador);
float Divicion (int numerador, int denominador);

int main(){
    int numero1=5;
    int numero2=7;
    int resultado;
    
    resultado = Suma(numero1, numero2);
    printf("%d\n", resultado);
    resultado = Resta(numero1, numero2);
    printf("%d\n", resultado);
    resultado = Multiplicacion(numero1, numero2);
    printf("%d\n", resultado);

    return 0;
}

int Suma (int sumando1, int sumando2){
    return sumando1 + sumando2;
}
int Resta (int minuendo, int sustraendo){
    return minuendo - sustraendo;
}
int Multiplicacion(int multiplicando, int multiplicador){
    return multiplicando * multiplicador;
}
