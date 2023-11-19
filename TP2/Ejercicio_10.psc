Algoritmo Ejercicio_10
	// En una olimpiada de tiro al blanco se llega a un acuerdo 
	// entre los participantes para que el puntaje obtenido sea 
	// calculado en base al puntaje original (0 a 10) alcanzado 
	// en el tiro efectuado, multiplicado por un factor según 
	// la siguiente tabla:
	//
	//		Puntaje Original	| 	Factor
	// 				0			|	   0
	// 			De 1 a 5		|	   6
	// 			De 6 a 8		|	   9
	// 			De 9 a 10		|	  10
	//
	// Para un tiro realizado determine el puntaje alcanzado 
	// aplicando el factor que le corresponde.
	
	Definir puntaje_original Como Entero
	Definir factor Como Entero
	
	Escribir "Ingresar el puntaje original: "
	Leer puntaje_original
	
	Si puntaje_original = 0 Entonces
		factor <- 0
	SiNo
		Si puntaje_original >= 1 y puntaje_original <= 5
			factor <- 6
		SiNo
			Si puntaje_original >= 6 y puntaje_original <= 8
				factor <- 9
			SiNo
				factor <- 10
			FinSi
		FinSi
	FinSi
	
	Escribir "El puntaje final es: " puntaje_original * factor
	
FinAlgoritmo
