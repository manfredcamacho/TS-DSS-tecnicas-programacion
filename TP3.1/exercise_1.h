#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN ALGORITMO  QUE PIDA, NOMBRE, APELLIDO, TELÉFONO Y EDAD DE UNA 
	PERSONA Y LUEGO LO MUESTRE POR PANTALLA.
*/

extern void exercise_1() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 1      **\n");
	printf("\t\t***************************\n\n");
	
	char name[15];
	char lastname[15];
	int phoneNumber;
	int age;
	
	printf("Ingrese su nombre: ");
	scanf("%s", name);
	printf("Ingrese su apellido: ");
	scanf("%s", lastname);
	printf("Ingrese su numero de telefono: ");
	scanf("%d", &phoneNumber);
	printf("Ingrese su edad: ");
	scanf("%d", &age);
	printf("\nNombre: %s", name);
	printf("\nApellido: %s", lastname);
	printf("\nTelefono: %d", phoneNumber);
	printf("\nEdad: %d", age);
}
