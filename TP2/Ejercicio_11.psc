Algoritmo Ejercicio_11
	// Dada la cantidad de horas trabajas,  la antigüedad, y la 
	// categoría del empleado, y además Sabemos  que cobra  
	// 650 pesos por cada  año trabajado y que el valor de la hora
	// según la categoría  es:
	// cat 1= 100, cat 2= 200, cat 3= 250, cat 4= 300.
	//
	// a.- Determinar sueldo del  empleado.
	// b.- Informar si el sueldo supera los 20000 pesos.

	Definir cant_horas, antiguedad, categoria, valor_hora, salario, BONO_ANTIGUEDAD Como Entero
	
	BONO_ANTIGUEDAD <- 650
	
	Escribir "Ingresar la cantidad de horas trabajadas: "
	Leer cant_horas
	
	Escribir "Ingresar la antiguedad: "
	Leer antiguedad
	
	Escribir "Ingresar la categoria: "
	leer categoria
	
	Segun categoria Hacer
		1:
			valor_hora = 100
		2:
			valor_hora = 200
		3:
			valor_hora = 250
		De Otro Modo:
			valor_hora = 300
	Fin Segun
	
	salario <- (cant_horas * valor_hora) + (antiguedad * BONO_ANTIGUEDAD)
	
	Escribir "El salario del empleado es: $", salario
	
	Si salario > 20000 Entonces
		Escribir "El salario supera los $20000"
	SiNo
		Escribir "El salario no supera los $20000"
	FinSi
	 
FinAlgoritmo
