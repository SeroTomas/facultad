#include <stdio.h>
#include <stdlib.h>

/*
Escriba una función que reciba un vector numérico de enteros y que devuelva por
referencia cuantos de los datos son pares y cuantos son impares.
*/

void coincidencias(short *,short, short *, short *);

int main(void){
	
	short vector[5] ={2,2,2,4,2};
	short pares = 0;
	short impares = 0;
	
	coincidencias(vector, 5, &pares, &impares);
	
	printf("la cantidad de numeros pares es: %hd \n",pares);
	printf("la cantidad de numers imparse es: %hd \n", impares);
	
	return 0;
}


void coincidencias(short *vector,short cantidad, short *pares, short *impares){
	
	for(short i = 0; i < cantidad;i++){
		if(!(vector[i] % 2)){
			*pares += 1;
		}else {
			*impares += 1;
		}
	}
}
