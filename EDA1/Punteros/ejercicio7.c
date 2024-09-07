#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
7- Escriba una función que reciba como parámetro un string y una letra (pásela a la función también
por medio de un puntero). Busque si existe dicha letra por medio de punteros y devuelva cuantas
veces está en el texto. Escriba un main que use dicha función y todos los elementos que sean
necesarios.
*/

short letraRepetida( char*, short, char*);

int main(void){
	
	char palabra[11] = {"rata"};
	char letra = 'a';
	short repetidas;
	
	
	repetidas = letraRepetida(palabra, 10, &letra);
	
	printf("La cantidad de veces que %c se repite en %s es: %hd \n", letra, palabra, repetidas);
	
	return 0;
}

short letraRepetida(char *palabra, short cantidad, char *letra){
	
	short contador = 0;
	
	for(short i =0; (i < 10 && palabra[i] != 0) ;i++){
		
		if(palabra[i] == *letra){
			contador++;
		}
	}
	
	return contador;
	
}
