Algoritmo MAIN
	//	SE PONEN A LA VENTA LAS ENTRADAS PARA UN PARTIDO DE FÚTBOL INTERNACIONAL,
	//	CUYO PRECIO DEPENDE DE LA TRIBUNA, ASÍ:
	//
	//	TRIBUNA  NORTE Y SUR CUESTAN 250 PESOS,
	//	TRIBUNA ORIENTE CUESTA  450 PESOS
	//	Y TRIBUNA OCCIDENTE CUESTA  650 PESOS. 
	//
	//	DISEÑE LA SOLUCIÓN EN UN PROGRAMA QUE CONTROLE LA VENTA DE DICHAS ENTRADAS
	//	A FIN DE PODER SABER LA CANTIDAD DE PERSONAS QUE ASISTEN A CADA TRIBUNA,
	//	LA CANTIDAD TOTAL DE PERSONAS Y EL MONTO TOTAL RECAUDADO POR LA VENTA DE 
	//	TODAS LAS ENTRADAS. 
	//	
	//	FINALIZA LA VENTA DE ENTRADAS CUANDO SE INGRESA UNA
	//	VENTA A TRIBUNA  IGUAL A "ZZZ".
	
	Definir precio_norte, precio_sur, precio_oriente, precio_occidente, monto_total Como Real
	Definir cant_norte, cant_sur, cant_oriente, cant_occidente, cant_total, total_personas Como Entero
	Definir tribuna Como Caracter
	
	precio_norte <- 250
	precio_sur <- 250
	precio_oriente <- 450
	precio_occidente <- 650
	monto_total <- 0
	
	Escribir "Ingrese la tribuna que desee comprar:"
	Leer tribuna
	
	Mientras tribuna <> "ZZZ" Hacer
		
		Segun tribuna Hacer
			Opcion "norte":
				monto_total <- monto_total + precio_norte
				cant_norte <- cant_norte + 1
			Opcion "sur":
				monto_total <- monto_total + precio_sur
				cant_sur <- cant_sur + 1
			Opcion "oriente":
				monto_total <- monto_total + precio_oriente
				cant_oriente <- cant_oriente + 1
			Opcion "occidente": 
				monto_total <- monto_total + precio_occidente
				cant_occidente <- cant_occidente + 1
			De Otro Modo:
				Escribir "Esa tribuna no existe..."
		FinSegun
		
		Escribir ""
		Escribir "Ingrese la tribuna que desee comprar:"
		Leer tribuna
		
	FinMientras
	
	total_personas <- cant_norte + cant_sur + cant_oriente + cant_occidente
	
	Escribir ""
	Escribir "La cantidad total de pesonas es de ", total_personas
	Escribir " * Norte: ", cant_norte
	Escribir " * Sur: ", cant_sur
	Escribir " * Oriente: ", cant_oriente
	Escribir " * Occidente: ", cant_occidente
	Escribir ""
	Escribir "El total recaudadado es de $", monto_total
	
	
FinAlgoritmo
