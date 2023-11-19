#include <stdio.h>
#include <stdlib.h>
#define QUANTITY 30
#define UNIT_PRICE 11500

/* 
	DADA UNA COMPRA DE 30 PC PARA UNA EMPRESA Y SABIENDO QUE CADA UNA CUESTA 
	11500 PESOS.
	
		SÉ QUE EL PROVEEDOR ME HACE UN 20% DE DESCUENTO.
		SÉ QUE EL ENVÍO ME COBRA UN 5% DEL TOTAL.
		SÉ QUE EL SEGURO DE TRASLADO ES 12% DEL TOTAL EL CUAL SE DEVUELVEN SI 
			LOS EQUIPOS LLEGAN BIEN.

	OBTENER:
		EL PRECIO SIN DESCUENTOS. 
		EL PRECIO CON TODOS LOS DESCUENTOS SI TODAS LAS PC LLEGAN BIEN. 
		EL PRECIO CON TODOS LOS DESCUENTOS SI LAS PC lLEGAN MAL. 
		SOLAMENTE EL PRECIO DEL DESCUENTO, 
		SOLAMENTE EL PRECIO DEL ENVÍO.
	
*/

extern void exercise_15() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 15     **\n");
	printf("\t\t***************************\n\n");
	
	int quantity = 30;
	float unitPrice = 11500;
	
	float basePrice = quantity * unitPrice;
	float discount = basePrice * 0.2;
	float shipping =  basePrice * 0.05;
	float insurance = basePrice * 0.12;
	
	printf("\nEl total por la compra de 30 computadoras es de:");
	printf("\nSIN DESCUENTOS:\t\t%.2f", basePrice + shipping + insurance);
	printf("\nCON DESCUENTOS (OK):\t%.2f", basePrice - discount + shipping );
	printf("\nCON DESCUENTOS (NO OK):\t%.2f", basePrice - discount + shipping + insurance);
	printf("\nMONTO DESCUENTO:\t%.2f", discount);
	printf("\nMONTO ENVIO:\t\t%.2f", shipping);
}
