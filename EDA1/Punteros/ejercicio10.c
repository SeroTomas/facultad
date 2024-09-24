#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
10- Escriba una función que permita buscar en un vector que sea del siguiente tipo de dato por el
campo texto. De existir lo buscado devuelva donde se encontró y si no está devuelva -1.
struct datos{
short A;
float B;
char texto[100];
};
*/

struct Datos{
	short A;
	float B;
	char texto[100];
};

void toLower(struct Datos *, short);
short encontrar(struct Datos *, short, char *);

int main(void){
	
	
	char busqueda[100] = {"facundo perez"};
	short indice;
	struct Datos vectorStruct[4] = {
		{1, 2.5, "Tomas Silverio"},
		{2, 3.5, "Jorge Diaz"},
		{3, 4.5, "Gustavo Pascual"},
		{4, 5.5, "Facundo Perez"}
	};
	
	toLower(vectorStruct, 4);
	indice = encontrar(vectorStruct, 4, busqueda);
	
	if(indice != -1){
		printf("El indice encontrado es %hd: \t %hd \t %f \t %s", indice, vectorStruct[indice].A, vectorStruct[indice].B, vectorStruct[indice].texto );
	}else {
		printf("El dato no fue encontrado");
	}
	
	return 0;
}

short encontrar(struct Datos *vector, short cantidad, char *string){
	
	short indiceBuscado = -1;
	
	for(short i = 0; (i < cantidad && indiceBuscado == -1) ;i++){
		
		if(!strcmp(string, vector[i].texto )){
			indiceBuscado = i;
		}
	}
	
	return indiceBuscado;
	
}

void toLower(struct Datos *vector, short cantidad){
	
	for(short i = 0;i < cantidad;i++){
		strcpy(vector[i].texto, strlwr(vector[i].texto));
	}
}


