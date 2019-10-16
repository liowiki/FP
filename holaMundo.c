/* Programa que muestra hola mundo en pantalla
Autor: Julio Cesar Roldan*/

#include <stdio.h> // area de librerias

int main(){// funcion principal

    int sumandoUno = 1;
    int sumandoDos = 5;
    int resultado;



    printf("Hola mundo \n");
    printf("Esta es otra linea\n");//printf imprime texto

    resultado = sumandoUno + sumandoDos;

    //printf("El resultado de la suma es: %d", resultado)
    printf("la suma de %d mas %d es %d", sumandoUno, sumandoDos, resultado);
    return 0;//retorna un valor entero
}//fin de la funcion
