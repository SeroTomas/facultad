#include <stdio.h>
#include <stdlib.h>
/*
Lo mismo que el ejercicio 1) pero ahora devuelva la letra convertida por referencia
*/

void convertirCaracter(char *, char *);

int main(void){
	
	char letraMayus = 'A';
	char letraMinus = 'a';
	char error = '7';
	char convertida;
	
	convertirCaracter(&letraMayus, &convertida);
	//convertirCaracter(&letraMinus, &convertida);
	//convertirCaracter(&error, &convertida);
	
	if(convertida){
		printf("La letra convertida es: %c \n", convertida);
	}
	
	return 0;
}


void convertirCaracter(char *letra, char *convertida){
	
	char letraConvertida = *convertida;
	
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

	*convertida = letraConvertida;
	
}
