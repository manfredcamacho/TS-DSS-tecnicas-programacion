Algoritmo Ejercicio_4
	// Dados LA CANTIDAD de varones y el de mujeres de un curso, 
	// calcular el total de alumnos. Si el total supera los 35 
	// alumnos informar CURSO NUMEROSO. 
	// En caso contrario, calcular e informar lo que se deberá 
	// pagar para realizar una salida con todos, si cada alumno 
	// paga  $55.-
	
	
	Definir cant_hombres, cant_mujeres, cant_total Como Entero
	
	Escribir "Ingrese la cantidad de hombres: "
	Leer cant_hombres
	Escribir "Ingresar la cantidad de mujeres: "
	Leer cant_mujeres
	
	cant_total <- cant_hombres + cant_mujeres
	
	Si cant_total > 35 Entonces
		Escribir "CURSO NUMEROSO"
	SiNo
		total_salida <- cant_total * 55
		Escribir "El total a pagar por la salida es: $", total_salida
	FinSi
	

FinAlgoritmo
