Algoritmo Ejercicio_14
	// Se realiza una encuesta entre 100 personas que votan por 
	// los candidatos A o B. Se pide informar los porcentajes 
	// obtenidos por cada candidato.
	
	Definir CANTIDAD_VOTOS, cant_votos_A, cant_votos_B Como Entero
	Definir porcentaje_A, porcentaje_B Como Real
	
	CANTIDAD_VOTOS <- 100
	
	Para contador<-1 Hasta CANTIDAD_VOTOS Con Paso 1 Hacer
		
		voto <- azar(2)
		
		Si voto = 0 Entonces
			cant_votos_A <- cant_votos_A + 1
		SiNo
			cant_votos_B <- cant_votos_B + 1
		FinSi
		
	Fin Para
	
	porcentaje_A <- redon(cant_votos_A / CANTIDAD_VOTOS * 100)
	porcentaje_B <- redon(cant_votos_B / CANTIDAD_VOTOS * 100)

	Escribir "El candidato A obtuvo el ", porcentaje_A, "% de los votos"
	Escribir "El candidato B obtuvo el ", porcentaje_B, "% de los votos"

FinAlgoritmo

