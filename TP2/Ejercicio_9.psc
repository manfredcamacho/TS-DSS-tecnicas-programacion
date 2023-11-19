Algoritmo Ejercicio_9
	// Dado los 3 lados de un triángulo determinar qué tipo de triangulo es.
	
	Definir lado_1, lado_2, lado_3 Como Real
	
	Escribir "Ingrese el primer lado: "
	Leer lado_1
	
	Escribir "Ingrese el segundo lado: "
	Leer lado_2
	
	Escribir "Ingrese el tercer lado: "
	Leer lado_3

	Si lado_1 = lado_2 y lado_2 = lado_3 Entonces
		Escribir "Es un triangulo equilatero"
	SiNo
		Si lado_1 <> lado_2 y lado_1 <> lado_3 y lado_2 <> lado_3 Entonces
			Escribir "Es un triangulo escaleno"
		Sino 
			Escribir "Es un triangulo isósceles"
		FinSi
	FinSi
	
	
FinAlgoritmo
