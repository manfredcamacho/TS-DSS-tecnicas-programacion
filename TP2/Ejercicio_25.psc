Algoritmo Ejercicio_25
	//	UNA EMPRESA TIENE 65 TRABAJADORES, A CADA UNO DE ELLOS LE PAGA UN
	//	SUELDO SEGÚN LAS HORAS TRABAJADAS.  ADEMÁS  A CADA TRABAJADOR CUYO
	//	SUELDO SUPERO LOS 18000 PESOS LE DESCUENTA 10% POR CONCEPTO DE 
	//	IMPUESTOS. SE DESEA SABER CUÁNTOS TRABAJADORES GANAN MÁS DE 20000 PESOS,
	//	CUANTOS GANAN MENOS DE  12000 PESOS. 
	
	Definir cant_mas_20k, cant_menos_12k Como Entero
	Definir salario, impuesto Como Real
	
	impuesto <- 0.1
	
	Para i <- 1 Hasta 65 con Paso 1 Hacer
		salario <- GenerarSalarioAleatorio()
		
		Si salario > 18000 Entonces
			salario <- salario * (1 - impuesto)
		FinSi
		
		Si salario > 20000 Entonces
			cant_mas_20k <- cant_mas_20k + 1
		SiNo
			cant_menos_12k <- cant_menos_12k + 1
		FinSi
		
	FinPara
	
	Escribir cant_mas_20k, " Trabajadores ganan mas de 20k"
	Escribir cant_menos_12k, " Trabajadores ganan menos de 12k"
	
	
FinAlgoritmo

Funcion salario <- GenerarSalarioAleatorio
	// Genera salarios aleatorios entre 10.000 y 30.000
	salario <- 10000 + azar(20000)
FinFuncion
