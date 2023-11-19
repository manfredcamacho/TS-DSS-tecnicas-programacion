Algoritmo Ejercicio_21
	// EN UN CAMPEONATO INTER-COLEGIAL SE DESEA CONOCER LA CATEGORÍA A LA
	// QUE CORRESPONDE CADA PARTICIPANTE. 
	//
	// SE INGRESA EL NOMBRE Y LA EDAD DE CADA UNO DE ELLOS. 
	// EL PROGRAMA TERMINA CUANDO EL NOMBRE ES IGUAL A "ZZZ".
	// 	*	CATEGORÍA INFANTIL, PARA LOS MENORES DE 11 AÑOS
	//	*	CATEGORÍA PUBER, ENTRE LOS 11 Y LOS 14 AÑOS
	//	*	CATEGORÍA JUVENIL, PARA LOS MAYORES DE 14 AÑOS
	//		
	// INFORMAR NOMBRE Y CATEGORÍA.
	
	Definir nombre, categoria Como Caracter
	Definir edad Como Entero
	
	Escribir "Ingrese su nombre"
	Leer nombre
	
	Mientras nombre <> "ZZZ" Hacer
		Escribir "Ingrese su edad: "
		Leer edad
		
		Si edad < 11 Entonces
			categoria <- "INFANTIL"
		SiNo
			Si edad >= 11 y edad <= 14
				categoria <- "PUBER"
			SiNo
				categoria <- "JUVENIL"
			FinSi
		FinSi
		
		Escribir ""
		Escribir nombre, " tu categoria es ", categoria
		Escribir ""
		
		Escribir "Ingrese su nombre: "
		Leer nombre
		
	FinMientras
	
FinAlgoritmo
