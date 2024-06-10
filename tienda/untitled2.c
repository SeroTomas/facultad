#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5


struct Producto {
	short codigo;
	char categoria[21];
	char nombre[31];
	char marca[21];
	short precio;
	short costo;
	char proveedor[31];
	short stock;
};


int main(void) {
	
	struct Producto productos[CANTIDAD];
	short indice;
	short opcion;
	
	for(indice = 1; indice <= CANTIDAD ;indice++){
		
		printf("\nProducto: %hd \n", indice);
		
		printf("Ingrese el nombre del producto: \t ");
		scanf(" %30[^\n]s", productos[indice].nombre );
		
		fflush(stdin);
		
		printf("\nIngrese la marca del producto: \t ");
		scanf(" %20[^\n]s", productos[indice].marca);
		
		fflush(stdin);
		
		printf("\nIngrese la categoria del producto: \t");
		scanf(" %20[^\n]s", productos[indice].categoria);
		
		fflush(stdin);
		
		printf("\nIngrese el proveedor del producto: \t");
		scanf(" %30[^\n]s", productos[indice].proveedor);
		
		fflush(stdin);
		
		printf("\nIngrese el precio de venta del producto: \t");
		scanf(" %hd", &productos[indice].precio);
		
		fflush(stdin);
		
		printf("\nIngrese el costo del producto: \t");
		scanf(" %hd", &productos[indice].costo);
		
		fflush(stdin);
		
		printf("\nIngrese el stock del producto: \t");
		scanf(" %hd", &productos[indice].stock);
	}
	
	printf("\n--Ingrese el numero de la accion que desea realizar--\n");
	
	
	switch (1) {
	case 1:
		//TODO
		break;
	case 2:
		//TODO
		break;
	default:
		//TODO
		break;
	}
	
	
	return 0;
}


