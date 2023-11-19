#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS A LOS 
	QUE SE LES PAGA 50 PESOS POR HORA SI ÉSTAS NO SUPERAN LAS 35 HORAS. CADA 
	HORA POR ENCIMA DE 35 SE CONSIDERARÁ EXTRA Y SE PAGA A 75 PESOS.
	EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE SE LE 
	DEBE PAGAR.
	ADEMÁS EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO SALARIO, SI ES 
	ASÍ EL PROGRAMA SE VUELVE A REPETIR
	EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE CALCULE EL SALARIO.
*/
float calculateSalary(int);

extern void exercise_10() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 10     **\n");
	printf("\t\t***************************\n\n");
	
	int hoursWorked;
    int shouldCalculateAnother = 1;
    float salary;
    
	while(shouldCalculateAnother){
	 	printf("\nIngrese el numero de horas trabajadas: ");
	    scanf("%d", &hoursWorked);
	
	    salary = calculateSalary(hoursWorked);
		printf("El salario semanal sera de: %.2f\n", salary);

	    printf("\nDesea calcular otro salario? (0 para No / 1 para Si): ");
	    scanf("%d", &shouldCalculateAnother);
	}
 
}

float calculateSalary(int hoursWorked){
	float basePay = 50;
    float overtimePayRate = 75;
    int maxRegularHours = 35;
    
	if (hoursWorked <= maxRegularHours) {
        int regularPay = hoursWorked * basePay;
        return regularPay;
    } else {
        int overtimeHours = hoursWorked - maxRegularHours;
        int regularPay = maxRegularHours * basePay;
        int overtimePay = overtimeHours * overtimePayRate;
        int totalPay = regularPay + overtimePay;
        return totalPay;
    }
}
