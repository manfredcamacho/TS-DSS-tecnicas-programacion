Algoritmo Ejercicio_12
	
	Definir MILLA_METRO, PULGADA_METRO, YARDA_PIE, PIE_PULGADA Como Real
	
	MILLA_METRO <- 1609
	PULGADA_METRO <- 0.0254
	YARDA_PIE <- 3
	PIE_PULGADA <- 12
	
	Escribir "Ingrese la cantidad en pies: "
	Leer cantPies
	Escribir  "Ingrese la cantidad en metros"
	Leer cantMetros
	
	totalPulgadas <- cantPies * PIE_PULGADA + cantMetros * (1 / PULGADA_METRO) 
	totalYardas <-  cantPies * (1 / YARDA_PIE) + cantMetros * (1 / PULGADA_METRO) * (1 / PIE_PULGADA) * (1 / YARDA_PIE)
	totalMetros <- cantPies * PIE_PULGADA * PULGADA_METRO + cantMetros
	totalMillas <- cantPies * PIE_PULGADA * PULGADA_METRO * (1 / MILLA_METRO) + cantMetros * (1 / MILLA_METRO)
	
	Escribir "La suma es: "
	Escribir "            ", totalPulgadas, " pulgadas."
	Escribir "            ", totalYardas, " yardas."
	Escribir "            ", totalMetros, " metros."
	Escribir "            ", totalMillas, " millas."
	
	
FinAlgoritmo
