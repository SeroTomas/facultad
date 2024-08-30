#include <stdio.h>
#include <stdlib.h>

/*
2- Escriba una función que reciba un vector numérico de enteros y calcule su promedio devolviendo
dicho valor. La función deberá poder recibir vectores de distinto tamaño para hacer el cálculo.
Muestre como usa la función en un main.
*/

float calcularPromedio(short *vector, short cantidad );

int main (void){
	
	short numeros[10] = {10,20,30,40,50,60,70,80,96,120};
	float promedio = calcularPromedio(numeros, 10);
	
	printf("%.2f", promedio);
	
	return 0;
}

float calcularPromedio(short *vector, short cantidad){
	
	long sumatoria;
	float promedio;
	
	for(short i=0;i<cantidad;i++){
		sumatoria += vector[i];
	}
	
	promedio = (float)sumatoria/cantidad;
	
	return promedio;
	
}
