#include <stdio.h>
#include <stdlib.h>

/*
Escriba una función que reciba por referencia una única letra y si está en mayúscula la
convierta a minúscula y viceversa. Escriba dentro de la función su propio código para
saber si es mayúscula o minúscula y para convertirla. NO use funciones tales como
toupper. Haga el código usted.
Devuelva la letra convertida por valor.

Rango mayusculas --> 65 a 90
Diferencia a minusculas --> 32

*/

char convertirCaracter(char *);

int main(void){
	
	char letraMayus = 'A';
	char letraMinus = 'a';
	char error = '7';
	char convertida;

	convertida = convertirCaracter(&letraMayus);
	//convertida = convertirCaracter(&letraMinus);
	//convertida = convertirCaracter(&error);
	
	if(convertida){
		printf("La letra convertida es: %c \n", convertida);
	}
	
	return 0;
}


char convertirCaracter(char *letra){
	
	char letraConvertida;
	
	char mayuscula = (*letra > 64 && *letra < 91);
	char noEsLetra = (*letra > 122 || *letra < 65);
	
	if(noEsLetra){
		
		printf("Error: Ingrese una letra valida, mayuscula o minuscula. \n");
		letraConvertida = 0;
		
	}else{
		
		if(mayuscula){
			printf("La letra proporcionada es mayuscula.\n");
			letraConvertida = *letra + 32;
		} else{
			printf("La letra proporcionada es minuscula.\n");
			letraConvertida = *letra - 32;
		}
		
	}
	
	return letraConvertida;
	
}
