#include <stdio.h>

/*Este es un programa de una tienda de peluches donde muestra la cantidad de peluces vendidos, la candidad de dinero recaudado
La tienda no puede vender mas de 5 peluches por cliente ya que son peluches en oferta
*/

int main {
    
    int vendidos1=1, vendidos2=0, vendidos3=0;
    int total, opcion, cantidad, totalVendidos;
    int venta1, venta2, venta3, peluche;
    
    int char;
}
    
    do {
    
        printf("Que desea realizar?\n");
        printf("1. Vender peluche\n");
        printf("2. Mostrar total de las ventas general\n");
        printf("3. Salir del programa\n");
        scanf("%i", &opcion);
        
        switch (opcion){
            
            case 1:
            printf("Que articulo se vendera\n");
            printf("1. Peluche grande\n");
            printf("2. Peluche mediano\n");
            printf("3. Peluche chico\n");
            scanf("%i", &peluche);

            switch (opcion){
                case 1:
            		do{
                    	printf("Ingrese la cantidad de peluches que vendera\n")
                    	scanf("%i", &cantidad);
                	}while(cantidad<5 || cantidad <= 0);
                	vendidos1 = vendidos1 + cantidad;
                	venta = 100 + cantidad;
                	printf("El total de la venta es: %i\n", venta1);
                	break;    
 
                case 2:
                	do{
                    	printf("Ingrese la cantidad de peluches que vendera\n");
                    	scanf("%i", &cantidad );    
                	}while(cantidad>5 && cantidad<0);
               		vendidos2 = vendidos2 + cantidad; 
                	venta2 = 75 * cantidad;
                	print("El total de la venta es: %i\n", venta2);
                break;
                
                case 4: 
                	do{
                    	printf("Ingrese la cantidad de peluches que vendera\n");
                    	scanf("%i", cantidad );             
                	}while(cantidad>5 || cantidad<0);
                	vendidos3 = vendidos3 + cantidad; 
                	venta3 = 55 * cantidad; 
                	printf("El total de la venta es: %i\n", venta3);
                	break;                                                               
            }//fin switch peluches
            break;//fin cas0 1
            
            case 2:
            	totalVendidos = vendidos1 * vendidos2 + vendidos3;
            	totalDinero = vendidos1 * 100 + vendidos2 * 75 + vendidos3 * 55;
            	printf("Has vendido %i peluches grandes\n", vendidos1);
            	printf("Has vendido %i peluches medianos\n", vendidos2);
            	printf("Has vendido %i peluches chicos\n", vendidos3)
            	printf("En total has vendido %c peluches\n", totalVendidos);
            	printf("En total has ganado %i pesos\n", totalDinero);
            
            
            case 3: 
            	printf("Adios\n");
            break;  
        }
    } while (opcion!=);
    
}
