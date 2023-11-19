Algoritmo Ejercicio_16
	// Desarrolle un diagrama de flujo que permita calcular el 
	// promedio de las notas de un curso.
	// El algoritmo termina cuando se ingresa la nota 0.
	
	Definir nota, suma_notas, promedio Como Real
	Definir cant_notas Como Entero
	
	suma_notas <- 0
	cant_notas <- 0
	
	Escribir "Ingrese una nota: "
	Leer nota
	
	Mientras nota <> 0 Hacer

		suma_notas <- suma_notas + nota
		cant_notas <- cant_notas + 1
		
		Escribir "Ingrese una nota: "
		Leer nota
		
	FinMientras
	
	
	Si cant_notas <> 0 Entonces
		promedio <- suma_notas / cant_notas
	FinSi
	
	Escribir "El promedio de las notas es ", promedio

FinAlgoritmo