#include <stdio.h>
#include <stdlib.h>

/*
Escriba una función que reciba un vector numérico de enteros y que copie a otro vector
los valores pares y este sea devuelto. Tiene libertad de hacer la función como usted
crea.
*/

void sumatoria(short *,short, short *);

int main(void){
	
	short vOriginal[5] = {1, 2, 3, 4, 5};
	short vCopia[sizeof(vOriginal) / 2];
	
	sumatoria(vOriginal, 5, vCopia);
	
	for(short i =0 ;vCopia[i] >= 0;i++){
		printf("Los numeros pares copiados son: %hd\n", vCopia[i]);
	}
	
	return 0;
}

void sumatoria(short *vOriginal, short cantidad, short *vCopia){
	
	short indice = 0;
	
	for(short i=0;i < cantidad;i++){
		
		if(!(vOriginal[i] % 2)){
			vCopia[indice] = vOriginal[i];
			indice++;
		}
	}
	
	vCopia[indice] = -1;
	
}
