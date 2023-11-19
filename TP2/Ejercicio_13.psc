Algoritmo Ejercicio_13
	// Dada las edades y estaturas de 6 alumnos. 
	// Se pide determinar: 
	// 		la Edad Promedio, 
	//		la Estatura Promedio, 
	//		la Cantidad de alumnos mayores a 10 años
	//		la Cantidad de alumnos que miden más de 1.40 mt. 
	
	Definir edad_promedio, estatura_promedio, estatura, sum_estaturas Como Real
	Definir edad, sum_edades, cant_mayores, cant_altos Como Entero
	Definir CANTIDAD_ESTUDIANTES Como Entero
	
	CANTIDAD_ESTUDIANTES <- 6
	sum_edades <- 0
	sum_estaturas <- 0
	cant_mayores <- 0
	cant_altos <- 0
	
	Para contador<-1 Hasta CANTIDAD_ESTUDIANTES Con Paso 1 Hacer
		Escribir "Ingrese la edad del alumno Nro ", contador, ":"
		Leer edad
		
		Escribir "Ingrese la estatura del alumno Nro ", contador, ":"
		Leer estatura
		
		sum_edades <- sum_edades + edad
		sum_estaturas <- sum_estaturas + estatura
		
		Si edad > 10 Entonces
			cant_mayores <- cant_mayores + 1
		FinSi
		
		Si estatura > 1.4 Entonces
			cant_altos <- cant_altos + 1
		FinSi
	Fin Para
	
	Escribir "El promedio de edades es: ", sum_edades / CANTIDAD_ESTUDIANTES
	Escribir "El promedio de estatura es de: ", sum_estaturas / CANTIDAD_ESTUDIANTES
	Escribir "La cantidad de alumnos mayores de 10 años es de: ", cant_mayores
	Escribir "La cantidad de alumnos que miden mas de 1.40 mt es de: ", cant_altos

	
FinAlgoritmo
