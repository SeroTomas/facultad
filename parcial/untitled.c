/*
Se desea escribir un codigo C para una estadistica que se realizara 
a no mas de 250 clientes de un supermercado.

A cada uno de los clientes se le preguntara:
-Nombre y apellido, de hasta 80 caracteres validos.
-DNI(Debera ser manejado como una cadena de caracteres)
-Numero de ticket. (De 10000 a 999999)
-total facturado en el ticket.


Para realizar la tarea se pide un menu que tenga los siguientes items:

-Un item para ingresar todos los datos de todos los clientes encuestados
tenga en cuenta que pueden ser 250 o menos (no se sabe de antemano)

-Un item que calcule el promedio facturado, este item debera llamar una funcion
que calcule el promedio recibiendo la suma y cantidad de datos a promediar

-un item que obtenga el numero de ticket con la mayor facturacion
(Considere que hay uno solo)

-Un item para buscar por DNI a un determinado cliente. si se encuentra
imprime su nombre y apellido, sino tambien debe ser informado.

-un item para terminar el programa

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Ticket{
	char nombreApellido[81];
	char dni[9];
	long numeroDeTicket;
	long facturado;
};

float calcularPromedio(long total, short cantidad);


int main(void) {
	
	struct Ticket tickets[250];
	short ingresoDeTicket = 1;
	short indice = 0;
	short auxIndice;
	long numTicket = 10000;
	long totalFacturado = 0;
	short opcion = 1;
	float promedio;
	char dniBuscado[9];
	short encontrado;
	
	while(ingresoDeTicket){
		
		tickets[indice].numeroDeTicket = numTicket;
		
		printf("ingrese nombre y apellido: \n");
		scanf(" %80[^\n]s", tickets[indice].nombreApellido);
		fflush(stdin);
		
		printf("ingrese dni: \n");
		scanf(" %8s", tickets[indice].dni);
		fflush(stdin);
		
		printf("Ingrese el monto: \n");
		scanf("%ld", &tickets[indice].facturado);
		totalFacturado += tickets[indice].facturado;
		
		printf("desea ingresar un nuevo ticket?\n");
		printf("ingrese 1 para un nuevo ticket\n");
		printf("ingrese 0 para continuar\n");
		scanf("%hd", &ingresoDeTicket);
		
		if(ingresoDeTicket){
			indice++;
			numTicket++;
		}
		
	}
	
	
	while(opcion){
		
		printf("1 para calcular promedio\n");
		printf("2 para mayor facturacion\n");
		printf("3 para buscar cliente por dni\n");
		printf("0 para finalizar\n");
		scanf("%hd", &opcion);
		
		switch (opcion) {
		case 1:
			promedio = calcularPromedio(totalFacturado, indice + 1);
			printf("el promedio es: %f\n", promedio);
			break;
		case 2:
			for(short i=0;i<= indice - 1;i++){
				if(tickets[i].facturado < tickets[i+1].facturado){
					auxIndice = i + 1;
				}else{
					auxIndice = i;
				}
			}
			
			printf("el ticket con mayor facturacion es de: %ld\n", tickets[auxIndice].facturado);
			break;
			
		case 3:
			encontrado = 0;
			
			fflush(stdin);
			printf("ingrese dni a buscar\n");
			scanf(" %8s", dniBuscado);
			
			for(short i=0;i<=indice;i++){
				
				if(!strcmp(tickets[i].dni, dniBuscado)){
					auxIndice = i;
					encontrado = 1;
				}
			}
			
			if(encontrado){
				printf("el cliente buscado por dni es: %s\n", tickets[auxIndice].nombreApellido);
			}else{
				printf("el cliente no existe");
			}
			
			
			break;
		
		case 0:
			opcion = 0;
			break;
		default:
			printf("ingrese una opcion valida\n");
			break;
		}
		
	}
	
	
	return 0;
}

float calcularPromedio(long total, short cantidad){
	
	return (float)total / cantidad;
	
}
