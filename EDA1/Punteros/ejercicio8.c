#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
8- Escriba una función que reciba como parámetro dos strings, y devuelva, un 0 si son iguales o 1 si
son distintos (siempre se está hablando del contenido de los mismos) Escriba un main que use
dicha función y todos los elementos que sean necesarios.
*/

short compararStrings(char*, char*);


int main(void){
	
	char palabra1[11] = {"camion"};
	char palabra2 [11] = {"camino"};
	short respuesta;
	
	respuesta = compararStrings(palabra1, palabra2);
	
	if(!respuesta){
		printf("los strings %s y %s son exactamente iguales", palabra1, palabra2);
	}else{
		printf("los strings %s y %s son distintas", palabra1, palabra2);
	}
	
	return 0;
}

short compararStrings(char *palabra1, char *palabra2){
	
	short respuesta;
	
	respuesta = strcmp(palabra1, palabra2);
	
	return respuesta;
}
