#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS A LOS 
	QUE SE LES PAGA 250 PESOS POR HORA SI ÉSTAS NO SUPERAN LAS 35 HORAS. CADA 
	HORA POR ENCIMA DE 35 SE CONSIDERARÁ EXTRA Y SE PAGA  A  85 PESOS.
	
	EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE SE LE 
	DEBE PAGAR. ADEMÁS EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO 
	SALARIO, SI ES ASÍ EL PROGRAMA SE VUELVE A REPETIR

*/

extern void exercise_22() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 22      **\n");
	printf("\t\t***************************\n\n");
	
	int hoursWorked;
    int basePay = 250;
    int overtimePayRate = 85;
    int maxRegularHours = 35;
    int shouldCalculateAnother = 1;
    
	while(shouldCalculateAnother){
	 	printf("\nIngrese el numero de horas trabajadas: ");
	    scanf("%d", &hoursWorked);
	
	    if (hoursWorked <= maxRegularHours) {
	        int regularPay = hoursWorked * basePay;
	        printf("El salario semanal sera de: %d\n", regularPay);
	    } else {
	        int overtimeHours = hoursWorked - maxRegularHours;
	        int regularPay = maxRegularHours * basePay;
	        int overtimePay = overtimeHours * overtimePayRate;
	        int totalPay = regularPay + overtimePay;
	        printf("El salario semanal sera de: %d\n", totalPay);
	    }
	    
	    printf("\nDesea calcular otro salario? (0 para No / 1 para Si): ");
	    scanf("%d", &shouldCalculateAnother);
	}
 
}
