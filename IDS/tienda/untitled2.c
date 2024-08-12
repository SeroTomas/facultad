#include <stdio.h>
#include <stdlib.h>

float calcularPromedio(short sumatoria, short cantidad);

int main(void) {
	

	printf("%2.f", calcularPromedio(500, 5));
	
	return 0;
}


float calcularPromedio(short sumatoria, short cantidad){
	
	return (float)sumatoria/cantidad;
	
}

