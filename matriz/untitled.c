#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char matriz[10][10] ={{' '}};
	short indiceHAscendente = 1;
	short indiceHDesendente = 8;
	
	//recorro las filas
	for(short i=0; i<10 ;i++){
		//recorro los casilleros
		for(short j=0; j<10 ;j++){
			
			if(i == 0 || i == 9){
				matriz[i][j]= 'Q';
			}else if(i > 0 && i < 10){
				matriz[i][0]='Q';
				matriz[i][9]='Q';
				
				matriz[i][indiceHAscendente]= 'H';
				matriz[i][indiceHDesendente]= 'H';
				
			}
			
		}
		if(i > 0){
			indiceHAscendente++;
			indiceHDesendente--;
		}
	}
	
	
	for (short i = 0; i < 10; i++) {
		for (short j = 0; j < 10; j++) {
			printf("%c\t", matriz[i][j]);
		}
		printf("\n");
	}
	

	
	
	
	
	return 0;
}
