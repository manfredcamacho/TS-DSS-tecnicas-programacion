Algoritmo Ejercicio_17
	// Desarrolle un algoritmo que le permita determinar de 
	// una lista de números:
	// 		Cuantos están entre  el 50 y el 75, ambos inclusive.
	// 		Cuantos son mayores de 80.
	// 		Cuantos son menores de 30.
	//	El  algoritmo finaliza cuando se ingresa el número  0.
	
	Definir num Como Real
	Definir entre_50_75, mayor_80, menor_30 Como Entero
	
	entre_50_75 <- 0
	mayor_80 <- 0
	menor_30 <- 0
	
	Escribir "Ingrese un numero: "
	Leer num
	
	Mientras num <> 0 Hacer
		
		Si num < 30 Entonces
			menor_30 <- menor_30 + 1
		SiNo
			Si num >= 50 y num <= 75 Entonces
				entre_50_75 <- entre_50_75 + 1
			SiNo
				Si num > 80 Entonces
					mayor_80 <- mayor_80 + 1
				FinSi
			FinSi
		FinSi
		
		Escribir "Ingrese un numero: "
		Leer num
		
	FinMientras
	
	Escribir "Entre 50 y 75 hay ", entre_50_75, " numeros"
	Escribir "Mayores a 80 hay ", mayor_80," numeros"
	Escribir "Menores a 30 hay ", menor_30," numeros"
	
FinAlgoritmo
