#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	DADA LA CANTIDAD DE HORAS TRABAJADAS, LA ANTIGÜEDAD, Y LA CATEGORÍA DEL 
	EMPLEADO.
	
	a.	SABIENDO QUE COBRA 50 PESOS POR CADA AÑO TRABAJADO Y QUE EL VALOR DE LA 
		HORA SEGÚN LA CATEGORÍA: CAT 1= 10, CAT 2= 20, CAT 3= 25, CAT 4= 30.
	b.	DETERMINAR SUELDO DEL EMPLEADO.
	c.	INFORMAR SI EL SUELDO SUPERA LOS 1000 PESOS.
	
	EFECTUAR EL EJERCICIO CON AL MENOS 2 FUNCIONES: UNA PARA CALCULAR EL COBRO 
	POR ANTIGÜEDAD Y OTRA PARA CALCULAR EL COBRO POR HORAS.
*/


float calculateHoursWage(int);
float calculateAnnualBonnus(int);

extern void exercise_9() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 9      **\n");
	printf("\t\t***************************\n\n");
	
	int hoursWorked, yearsWorked, category;
	float hourlyRate, annualBonus, salary;
	
	printf("Ingrese las horas trabajadas: ");
	scanf("%d", &hoursWorked);
	printf("Ingrese la antiguedad: ");
	scanf("%d", &yearsWorked);
	printf("Ingrese la categoria [1,2,3,4]: ");
	scanf("%d", &category);
	
	hourlyRate = calculateHoursWage(category);
	annualBonus = calculateAnnualBonnus(yearsWorked);
    salary = (hoursWorked * hourlyRate) + annualBonus;
    
    printf("\nEl salario del empleado sera: $%.2f", salary);

    if (salary > 1000) {
        printf("\nEl salario supera los $1,000 pesos.");
    } else {
        printf("\nEl salario no supera los $1,000 pesos.");
    }
	
}

float calculateHoursWage(int category){
	switch(category){
		case 1:
            return 10;
        case 2:
            return 20;
        case 3:
            return 25;
        case 4:
            return 30;
	}
}

float calculateAnnualBonnus(int yearsWorked){
	return yearsWorked * 50;
}

