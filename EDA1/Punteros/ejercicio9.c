#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
9- Escriba una función que permita ordenar un vector que sea del siguiente tipo de dato por el campo
letra:
struct datos{
short A;
float B;
char letra;
};
*/

struct Datos{
	short A;
	float B;
	char letra;
};

void ordenarVector(struct Datos *, short );
void toLower(char*);
void imprimirVector(struct Datos *, short);

int main(void){
	
	struct Datos vectorStruct[4] = {
		{1, 2.5, 'B'},
		{2, 3.5, 'a'},
		{3, 4.5, 'C'},
		{4, 5.5, 'b'}
	};
	
	imprimirVector(vectorStruct, 4);
	printf("\n");
	ordenarVector(vectorStruct, 4);
	imprimirVector(vectorStruct,4);
	
	return 0;
}


void ordenarVector(struct Datos *vector, short cantidad){
	
	char letraI;
	char letraJ;
	struct Datos aux;
	
	for(short i = 0;i<cantidad;i++){
		toLower(&vector[i].letra);
	}
	
	for(short i = 0;i< cantidad - 1 ;i++){
		
		for(short j = i + 1;j< cantidad;j++){
			
			letraI = vector[i].letra;
			letraJ = vector[j].letra;
			
			if(letraI > letraJ){
				
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
				
			}
		}
	}
}

void toLower(char *letra){
	
	
	if(*letra < 91 && *letra > 64){
		*letra += 32;
	}
}

void imprimirVector(struct Datos *vector, short cantidad){
	
	for(short i = 0;i < cantidad;i++){
		printf("\n%hd \t %f \t %c\n", vector[i].A, vector[i].B, vector[i].letra);
	}
	
}
