#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escriba una función que reciba dos strings. El primero contendrá un texto de hasta 40
caracteres válidos y el segundo string será un texto corto de no más de 10 caracteres
válidos.
La función deberá devolver un valor que diga si el segundo string forma parte del
primero.
Si el segundo string es más corto que el primero se deberá informar como un ERROR.
Todo por referencia y con valores numéricos.
Ej.
Texto=”Hola gente, como están.”
Cadena buscada=”gente”
La cadena gente está en el texto.
Sería también muy conveniente que indique cuantas veces se repite.

----

string1 --> hasta 40 caracteres
string2 --> hasta 10 caracteres
contador --> cuantas veces se repite. 
- devuelve 1 si string2 se encuentra en string1.
- devuelve 0 si no se encuentra.
- si string2 < string1 --> error.
*/

short encontrar(char *, char *, short *);

int main(void) {
	
	char oracion[41] = {"Hola buen dia dia"};
	char palabra[11] = {"Hol"};
	short contador = 0;
	short respuesta;
	
	respuesta = encontrar(oracion, palabra, &contador);
	
	switch (respuesta) {
	case -1:
		printf("Error: La palabra a buscar es menor que la oracion.\n");
		break;
	case 1:
		printf("La palabra se ha encontrado, se repite %hd veces.\n", contador);
		break;
	case 0:
		printf("La palabra no se ha encontrado.\n");
		break;
	default:
		printf("Error: algo ha ocurrido, palabra no valida\n");
		break;
	}
	
	
	return 0;
}

short encontrar(char *string1, char *string2, short *contador){
	
	short respuesta = 0;
	short string1Length = strlen(string1);
	short string2Length = strlen(string2);
	short recorrido = string1Length - string2Length;
	short coincidencia = 1;
	
	//verifico si el string 1 es mas largo que el 2.
	if(recorrido < 0){
		respuesta = -1;
	} else{
		
		for(short i = 0;i <= recorrido ;i++){
			//planteo bandera
			coincidencia = 1;
			
			for(short j = 0; (j < string2Length && coincidencia) ;j++){
				
				if(string1[i + j] == string2[j]){
					coincidencia++;
				}else{
					coincidencia = 0;
				}
				
				if(coincidencia == string2Length){
					respuesta = 1;
					*contador += 1;
				}
				
				//si el indice llega a medir lo mismo que la palabra 
				//es que se ha encontrado
				
			}
		}
	}
	
	if(!respuesta){
		respuesta = 0;
	}
	return respuesta;
}
