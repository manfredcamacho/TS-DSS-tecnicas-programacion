Algoritmo Ejercicio_29
	//	ESCRIBIR UN ALGORITMO QUE PERMITA EFECTUAR EL CÁLCULO DEL ÁREA DE UN CUADRADO, UN CÍRCULO, UN TRIÁNGULO
	//	EQUILÁTERO SEGÚN LA OPCIÓN SELECCIONADA POR EL USUARIO A TRAVÉS DE UN MENÚ. CREAR DOS VERSIONES DEL 
	//	ALGORITMO: UNA CON SI/SINO Y LA OTRA CON SEGÚN.
	
	Definir lado, base, radio, altura Como Real
	Definir operacion Como Entero
	
	Mientras operacion <> 4 Hacer
		operacion <- mostrarMenu()
		
//		Si operacion = 1 Entonces
//			Escribir "Ingrese el lado del cuadrado: "
//			Leer lado
//			
//			area <- calcularAreaCuadrado(lado)
//			
//			Escribir "El area del cuadrado es: ", area
//		SiNo
//			Si operacion = 2 Entonces
//				Escribir "Ingrese el radio del circulo: "
//				Leer radio
//				
//				area <- calcularAreaCirculo(radio)
//				
//				Escribir "El area del circulo es: ", area
//			SiNo
//				Si operacion = 3 Entonces
//					Escribir "Ingrese la base del triangulo: "
//					Leer base
//					
//					Escribir "Ingrese la altura del triangulo"
//					Leer altura
//					
//					area <- calcularAreaTriangulo(base, altura)
//					
//					Escribir "El area del triangulo es: ", area
//				SiNo
//					Escribir "Saliendo del programa..."
//				FinSi
//			FinSi
//		FinSi
		
		Segun operacion Hacer
			Opcion 1:
				Escribir "Ingrese el lado del cuadrado: "
				Leer lado
				
				area <- calcularAreaCuadrado(lado)
				
				Escribir "El area del cuadrado es: ", area
			Opcion 2:
				Escribir "Ingrese el radio del circulo: "
				Leer radio
				
				area <- calcularAreaCirculo(radio)
				
				Escribir "El area del circulo es: ", area
			Opcion 3:
				Escribir "Ingrese la base del triangulo: "
				Leer base
				
				Escribir "Ingrese la altura del triangulo"
				Leer altura
				
				area <- calcularAreaTriangulo(base, altura)
				
				Escribir "El area del triangulo es: ", area
			De Otro Modo:
				Escribir "Saliendo del programa..."
		FinSegun
	FinMientras
FinAlgoritmo

Funcion operacion <- mostrarMenu
	Repetir
		Escribir ""
		Escribir "Seleccione la operacion a realizar:"
		Escribir ""
		Escribir "1.- Calcular area de un cuadrado"
		Escribir "2.- Calcular area de un circulo"
		Escribir "3.- Calcular area de un triangulo"
		Escribir "4.- Salir del programa"
		Escribir ""
		Leer operacion
		
		Si operacion <> 1 y operacion <> 2 y operacion <> 3 y operacion <> 4 Entonces
			Escribir ""
			Escribir "La opcion ingresada es invalida, intente nuevamente..."
			Escribir ""
		FinSi
		
	Hasta Que operacion = 1 o operacion = 2 o operacion = 3 o operacion = 4
FinFuncion

Funcion area <- calcularAreaCuadrado(lado)
	area <- lado ^ 2
FinFuncion

Funcion area <- calcularAreaCirculo(radio)
	area <- PI * radio ^ 2
FinFuncion

Funcion area <- calcularAreaTriangulo(base, altura)
	area <- (base * altura) / 2
FinFuncion
	