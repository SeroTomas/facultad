#include <stdio.h>
#include <stdlib.h>

/*
3- Escriba una función que reciba un vector numérico y diga cuantos son números primos. En un main
se deberá imprimir cuantos fueron.
*/

short calcularNumerosPrimos(short *vector, short cantidad);

int main (void){
	
	short numeros[5]= {5,7,11,7,2};
	
	short primos = calcularNumerosPrimos(numeros, 5);
	
	printf("la cantidad de numeros primos en el vector es de %hd\n", primos);
	
	return 0;
}


short calcularNumerosPrimos(short *vector, short cantidad){
	
	short contador = 0;
	short esPrimo;
	
	for(short i=0; i<cantidad;i++){
		
		
		if(vector[i] > 1){
			
			esPrimo = 1;
			
			for(short j=2; j < vector[i] && esPrimo ;j++){
				
				if(vector[i] % j == 0){
					esPrimo = 0;
				}
				
			}
			
			if(esPrimo){
				contador++;
			}
			
		}
		
	}
	
	return contador;
	
}
