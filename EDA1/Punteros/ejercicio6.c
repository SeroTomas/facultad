#include <stdio.h>
#include <stdlib.h>

/*
6-Escriba una función que reciba como parámetro un texto y que devuelva la primera letra del mismo
usando un puntero. Escriba un main que use dicha función y todos los elementos que sean
necesarios.
*/

void primerLetra(char*, char*);

int main(void) {
	
	char palabra[11] = {"Buen dia"};
	char letra;
	
	primerLetra(palabra, &letra);
	
	printf("%c", letra);
	
	return 0;
}


void primerLetra(char *palabra, char *letra){
	*letra = palabra[0];
}
