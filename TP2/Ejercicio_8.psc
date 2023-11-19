Algoritmo Ejercicio_8
	// Realizar un programa que pida el ingreso de 2 números 
	// y la operación a realizar entre ellos y muestre el 
	// resultado de la operación.
	
	Definir num1, num2 Como Real
	Definir operador Como Caracter
	
	Escribir "Ingrese el primer numero: "
	Leer num1
	
	Escribir "Ingrese el segundo numero: "
	Leer num2
	
	Escribir "Ingrese el operador: "
	leer operador
	
	Segun operador Hacer
		"+":
			Escribir "La suma es: ", num1 + num2
		"-":
			Escribir "La resta es: ", num1 - num2
		"*":
			Escribir "La multiplicacion es: ", num1 * num2
		"/":
			Escribir "La division es: ", num1 / num2
		"^":
			Escribir "La potencia es: ", num1 ^ num2
		"%":
			Escribir "El modulo es: ", num1 MOD num2
		De Otro Modo:
			Escribir "No se reconocio el operador"
	Fin Segun
FinAlgoritmo
