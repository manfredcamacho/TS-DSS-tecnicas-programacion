#include <stdio.h>
#include <stdlib.h>

/* 
	DADA LA CANTIDAD DE HORAS TRABAJADAS, LA ANTIGÜEDAD, Y LA CATEGORÍA DEL 
	EMPLEADO, Y ADEMÁS SABEMOS  QUE COBRA  650 PESOS POR CADA  AÑO TRABAJADO Y 
	QUE EL VALOR DE LA HORA SEGÚN LA CATEGORÍA ES:
		CAT 1= 100, 
		CAT 2= 200, 
		CAT 3= 250, 
		CAT 4= 300.

	a.	DETERMINAR SUELDO DEL  EMPLEADO.
	b.	INFORMAR SI EL SUELDO SUPERA LOS 20000 PESOS.

*/

extern void exercise_11() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 11     **\n");
	printf("\t\t***************************\n\n");
	
	int hoursWorked, yearsWorked, category;
	float hourlyRate, annualBonus, salary;
	
	printf("Ingrese las horas trabajadas: ");
	scanf("%d", &hoursWorked);
	printf("Ingrese la antiguedad: ");
	scanf("%d", &yearsWorked);
	printf("Ingrese la categoria [1,2,3,4]: ");
	scanf("%d", &category);
	
	switch(category){
		case 1:
            hourlyRate = 100;
            break;
        case 2:
            hourlyRate = 200;
            break;
        case 3:
            hourlyRate = 250;
            break;
        case 4:
            hourlyRate = 300;
            break;
	}
	
	annualBonus = yearsWorked * 650;
    salary = (hoursWorked * hourlyRate) + annualBonus;
    
    printf("\nEl salario del empleado sera: $%.2f", salary);

    if (salary > 20000) {
        printf("\nEl salario supera los $20,000 pesos.");
    } else {
        printf("\nEl salario no supera los $20,000 pesos.");
    }
	
}
