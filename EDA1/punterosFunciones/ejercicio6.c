#include <stdio.h>
#include <stdlib.h>

/*
Escriba una función que reciba un string y una letra, y devuelva cuantas veces se repite
dicha letra. Haga todo por referencia.
*/

void cuantoSeRepite(char *, char *, short *);

int main(void){
	
	char string[15] ={"Hola buenas"};
	char letra = 'u';
	short contador = 0;
	
	cuantoSeRepite(string, &letra, &contador);
	
	printf("La letra %c se repite %hd\n", letra, contador);
	
	return 0;
}

void cuantoSeRepite(char *string, char *letra, short *contador){
	
	for(short i = 0; string[i] != 0 ;i++){
		if(string[i] == *letra){
			*contador += 1;
		}
	}
	
}

