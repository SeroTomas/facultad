#include <stdio.h>
#include <stdlib.h>

/*
5- Escriba una función que reciba cuatro letras sueltas por referencia y devuelva un string con las
mismas.
*/

void concatenar(char**,char*);

int main(void){
	
	char a = 'h';
	char b = 'o';
	char c = 'l';
	char d = 'a';
	
	char string[5];
	char *letras[4] = { &a, &b, &c, &d };
	
	concatenar(letras, string);

	printf(string);
	
	return 0;
}


void concatenar(char **letras, char *string){
	
	for(short i = 0;i < 4;i++){
		string[i] = *letras[i];
	}
	
	string[4] =0;
}
