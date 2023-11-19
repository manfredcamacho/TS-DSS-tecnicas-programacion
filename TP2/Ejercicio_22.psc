Algoritmo Ejercicio_22
	//	CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS
	//	A LOS QUE SE LES PAGA 250 PESOS POR HORA SI ÉSTAS NO SUPERAN LAS 35 
	//	HORAS. CADA HORA POR ENCIMA DE 35 SE CONSIDERARÁ EXTRA Y SE PAGA  A
	//	85 PESOS.
	//
	//	EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE 
	//	SE LE DEBE PAGAR.
	//
	//	ADEMÁS EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO SALARIO,
	//	SI ES ASÍ EL PROGRAMA SE VUELVE A REPETIR

	Definir salario, horas, precio_hora, precio_hora_extra  Como Real
	Definir seguir Como Logico
	Definir respuesta Como Entero
	
	seguir <- Verdadero
	precio_hora <- 250
	precio_hora_extra <- 85 // adicional??
	
	Mientras seguir Hacer
		Escribir "Ingrese las horas del trabajador: "
		Leer horas
		
		Si horas <= 35 Entonces
			salario <- horas * precio_hora
		SiNo
			salario <- (35 * precio_hora) + ((horas - 35) * precio_hora_extra)
		FinSi
		
		Escribir "El salario del trabajador es: ", salario
		
		Repetir
			Escribir ""
			Escribir "Desea ingresar otro salario?"
			Escribir "1.- SI"
			Escribir "2.- NO"
			Leer respuesta
			
			Segun respuesta Hacer
				1: 
					seguir <- Verdadero
				2:
					seguir <- Falso
				De Otro Modo:
					Escribir ""
					Escribir "Opcion invalida..."
			FinSegun
		Hasta Que respuesta = 1 o respuesta = 2 
		
		
	FinMientras
	
	
	
FinAlgoritmo
