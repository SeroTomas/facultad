#include <stdio.h>
#include <stdlib.h>

/*
1- Escriba un main en el que se declare un vector de números enteros, entre 10 y 15 valores, y que
muestre dichos valores por pantalla usando un puntero para hacerlo.
*/

int main(void) {
	
	short vector[10] = {10,20,30,40,50,60,70,80,90,100};
	short *puntero;
	
	puntero = vector;
	
	for(short i=0;i<10;i++){
		printf("%hd\n", *(puntero + i));
	}
	
	
	return 0;
}

