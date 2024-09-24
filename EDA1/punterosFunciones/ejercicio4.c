#include <stdio.h>
#include <stdlib.h>

/*
Escriba una función que reciba un vector numérico de enteros y que devuelva por
referencia la suma de los valores de las posiciones pares y la resta de las posiciones
impares.
*/

void sumatoria(short *,short, short *);

int main(void){
	short vector[5] ={1,2,3,4,5};
	short resultado = 0;
	
	sumatoria(vector, 5, &resultado);
	
	printf("la sumatoria de los indices es: %hd \n", resultado );
	
	return 0;
}

void sumatoria(short *vector, short cantidad, short *resultado){
	
	for(short i = 0;i < cantidad;i++){
		
		if((i+1) % 2 == 0){
			*resultado += vector[i];
		} else{
			*resultado -= vector [i];
		}
		
	}
	
	
}
