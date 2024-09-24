#include <stdio.h>
#include <stdlib.h>

/*
Escriba una función que reciba un vector numérico de enteros y que devuelva por
referencia la suma de los valores de las posiciones pares y la resta de las posiciones
impares.
*/

void sumatoria(short *,short, short *, short *);

int main(void){
	short vector[5] ={1,2,3,4,5};
	short pares = 0;
	short impares = 0;
	
	sumatoria(vector, 5, &pares, &impares);
	
	printf("la sumatoria de los indices pares es: %hd \n", pares );
	printf("la sumatoria de los indices impares es: %hd \n", impares );
	
	return 0;
}

void sumatoria(short *vector, short cantidad, short *pares, short *impares){
	
	for(short i = 0;i < cantidad;i++){
		
		if((i+1) % 2 == 0){
			*pares += vector[i];
		} else{
			*impares += vector [i];
		}
		
	}
	
	
}
