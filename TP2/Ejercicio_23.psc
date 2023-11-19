Algoritmo Ejercicio_23
	//	DETERMINE EL MENOR VALOR DE 5 NÚMEROS, INDICANDO ADEMÁS A QUÉ ORDEN
	//	PERTENECE. CONSIDERE QUE EL MENOR VALOR PUEDE REPETIRSE. POR 
	//	EJEMPLO: SI LOS NÚMEROS INGRESADOS FUERAN: 14, 19, 14, 16, 15.
	//	LOS RESULTADOS DEBEN SER: EL MENOR VALOR INGRESADO FUE 14 Y 
	//	CORRESPONDEN AL PRIMER NÚMERO, TERCER NÚMERO.
	
	Definir num, num_min, contador Como Entero
	Definir posiciones Como Caracter
	
	contador <- 0
	num_min <- 999999999
	
	Para contador <- 1 Hasta 5 con Paso 1 Hacer
		Escribir "Ingrese un numero: (", contador,"/5)"
		Leer num
		
		Si num < num_min Entonces
			num_min <- num
			posiciones <- "Primer"
		SiNo
			Si num = num_min Entonces 
				Segun contador Hacer
					Opcion 2:
						posiciones <- Concatenar(posiciones, ", Segundo")
					Opcion 3:
						posiciones <- Concatenar(posiciones, ", Tercer")
					Opcion 4:
						posiciones <- Concatenar(posiciones, ", Cuarto")
					Opcion 5:
						posiciones <- Concatenar(posiciones, ", Quinto")
				FinSegun
			FinSi
		FinSi
	FinPara
	
	Escribir "El menor valor ingresado fue ", num_min, " y corresponde al ", posiciones, " numero."
	
	
	
FinAlgoritmo
