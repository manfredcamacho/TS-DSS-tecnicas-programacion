#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA EN C QUE PERMITA INGRESAR LAS TRES NOTAS DE UN ALUMNO, 
	CALCULAR EL PROMEDIO E INFORME SI ESTA APROBADO O DESAPROBADO. EL PROMEDIO 
	DEBERÁ CALCULARSE EN LA FUNCIÓN PROMEDIO(), QUE RECIBIRÁ POR REFERENCIA LAS 
	NOTAS Y DEBERÁ RETORNAR EL VALOR DEL PROMEDIO PARA EVALUAR LA CONDICIÓN EN 
	EL CUERPO PRINCIPAL.
*/

float calcularPromedio(int *, int *, int *);

void exercise_2_1() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 2      **\n");
	printf("\t\t***************************\n\n");
	
	int nota1, nota2, nota3;
	float promedio;
	
	printf("Ingrese la 1er nota: ");
	scanf("%d", &nota1);
	
	printf("Ingrese la 2da nota: ");
	scanf("%d", &nota2);
	
	printf("Ingrese la 3er nota: ");
	scanf("%d", &nota3);
	
	promedio = calcularPromedio(&nota1, &nota2, &nota3);
	
	printf("\nLa nota promedio es: %.2f", promedio);
}


float calcularPromedio(int *nota1, int *nota2, int *nota3){
	return (*nota1 + *nota2 + *nota3) / 3;
}
