Algoritmo Ejercicio_18
	
	// INGRESAR CÓDIGO DE ARTICULO Y PRECIO, HASTA UN CÓDIGO 
	// DE ARTICULO IGUAL 0, DETERMINAR EL CÓDIGO DE ARTICULO
	// DEL PRECIO MÁS CARO Y EL DE MENOR PRECIO.
	
	Definir cod_articulo, cod_art_max, cod_art_min Como Entero
	Definir precio, precio_max, precio_min Como Real
	
	Escribir "Ingrese el codigo del articulo: "
	Leer cod_articulo
	
	Escribir "Ingrese el precio del articulo: "
	Leer precio
	
	cod_art_max = cod_articulo
	cod_art_min = cod_articulo
	precio_max = precio
	precio_min = precio
	
	Mientras precio <> 0 Hacer
	
		Si precio > precio_max Entonces
			precio_max <- precio
			cod_art_max <- cod_articulo
		FinSi
		
		Si precio < precio_min Entonces
			precio_min <- precio
			cod_art_min <- cod_articulo 
		FinSi
		
		Escribir "Ingrese el codigo del articulo: "
		Leer cod_articulo
		
		Escribir "Ingrese el precio del articulo: "
		Leer precio
		
	FinMientras
	
	Escribir ""
	Escribir "======================================================="
	Escribir "El codigo del articulo con el mayor precio es: ", cod_art_max
	Escribir "El codigo del articulo con el menor precio es: ", cod_art_min
	
FinAlgoritmo
