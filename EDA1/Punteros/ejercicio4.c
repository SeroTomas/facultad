#include <stdio.h>
#include <stdlib.h>

/*
4- Escriba una función que reciba dos vectores, que podrán ser de distintos tamaños, pero el segundo
menor o igual que el primero. El primer vector contendrá valores numéricos, y el segundo los
valores a buscar en el primero. Se deberá devolver de la función cuántos de esos valores existen en
el primer vector. Además escriba un main que muestre su uso.
*/

short encontrarCoincidencias(short *numeros, short cantidadNumeros, short *valores, short cantidadValores);

int main() {
	
	short numeros[5] = {1,2,3,4,5};
	short valores[3] = {7,5,4};
	short resultado;
	
	resultado = encontrarCoincidencias(numeros, 5, valores, 3);
	
	printf("Las coincidencias son: %hd\n", resultado);
	
	return 0;
}


short encontrarCoincidencias(short *numeros, short cantidadNumeros, short *valores, short cantidadValores){
	
	short coincidencia = 0;
	
	if(cantidadValores <= cantidadNumeros){
		
		for(short i = 0; i < cantidadNumeros ;i++){
			
			for(short j = 0; j < cantidadValores ;j++){
				
				if(valores[j] == numeros[i]){
					printf("El valor %hd coincide con el numero %hd\n", valores[j], numeros[i]);
					coincidencia++;
				}
			}
		}
		
	}else{
		printf("Error: el vector de valores debe ser menor o igual al de numeros\n");
	}
	
	return coincidencia;
	
}
