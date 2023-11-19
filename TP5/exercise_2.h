#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA EN C QUE PERMITA INGRESAR LAS TRES NOTAS DE UN ALUMNO 
	EN UN VECTOR, CALCULAR EL PROMEDIO E INFORME SI ESTA APROBADO O DESAPROBADO.
	EL PROMEDIO DEBERÁ CALCULARSE EN LA FUNCIÓN PROMEDIO(), QUE RECIBIRÁ POR 
	REFERENCIA EL VECTOR Y DEBERÁ RETORNAR EL VALOR DEL PROMEDIO PARA EVALUAR 
	LA CONDICIÓN EN EL CUERPO PRINCIPAL
*/

void cargarNotas(float notas[]);
float calcularPromedio(float notas[]);

void exercise_2() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 2      **\n");
	printf("\t\t***************************\n\n");
	
	float notas[3];
	float promedio;
	
	cargarNotas(notas);
	
	promedio = calcularPromedio(notas);
	
	if(promedio >= 7)
		printf("\nAPROBADO. El promedio del alumno es %.2f", promedio);
	else
		printf("\nDESAPROBADO. El promedio del alumno es %.2f", promedio);
}

void cargarNotas(float notas[]){
	int i;
	
	for(i = 0; i < 3; i++){	
		printf("Ingrese la nota (%d/3): ", i + 1);
		scanf("%f", &notas[i]);
	}
}

float calcularPromedio(float notas[]){
	float suma = 0;
	int i;
	
	for(i = 0; i < 3; i++){
		suma += notas[i];
	}
	
	return suma / 3;
}
