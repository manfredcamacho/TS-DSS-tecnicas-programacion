Algoritmo Ejercicio_28
	//	CONFECICONAR UN PROGRAMA QUE PUEDA INGRESAR DIVERSOS VALOR  NUMERICOS QUE CORRESPONDE 
	//	A TEMPERATURAS MENORES A 99.99 GRADOS, MEDIDAS EN GRADOS CENTIGRADOS, QUE FINALIZAN 
	//	CON UNO QUE TIENE EL VALOR 99.99. SE PIDE DETERMINAR E INFORMA:
	//
	//	A) EL VALOR MAYOR DETECTADO. 
	//	B) EL VALOR MENOR DETECTADO. 
	//	C) UNA LISTA CON LOS VALORES INGRESADOS EXPRESADOS EN GRADOS CENTIGRADOS Y EN GRADOS FAHRENHEIT
	//	(F = C/0.555 + 32).
	
	Definir temperatura, temp_max, temp_min Como Real
	Definir contador Como Entero
	
	Dimension temperaturas_c[100]
	Dimension temperaturas_f[100]
	
	Escribir "Ingrese una temperatura"
	Leer temperatura
	
	contador <- 1
	
	Mientras temperatura <> 99.99 Hacer
		Si temperatura > temp_max Entonces
			temp_max <- temperatura
		FinSi
		
		Si temperatura < temp_min Entonces
			temp_min <- temperatura
		FinSi
		
		temperaturas_c[contador] <- temperatura
		temperaturas_f[contador] <- convertirAFahrenheit(temperatura) 
		
		contador <- contador + 1
		
		Escribir "Ingrese una temperatura"
		Leer temperatura
		
	FinMientras
	
	Escribir "La temperatura maxima ingresada fue: ", temp_max
	Escribir "La temperatura minima ingresada fue: ", temp_min
	Escribir ""
	Escribir "Las temperaturas ingresadas fueron: "
	
	Para i <- 1 Hasta contador - 1 Hacer
		Escribir temperaturas_c[i], " C."
		Escribir temperaturas_f[i], " F."
		Escribir ""
	FinPara
	
FinAlgoritmo

Funcion temp_f <- convertirAFahrenheit(temp_c)
	// (F = C/0.555 + 32). 
	temp_f <- temp_c / 0.555 + 32
FinFuncion
	