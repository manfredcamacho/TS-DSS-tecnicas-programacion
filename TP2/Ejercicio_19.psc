Algoritmo Ejercicio_19
	// CONSTRUIR UN PROGRAMA QUE PUEDA INGRESAR VARIOS NUMEROS ENTEROS,
	// DISTINTOS DE CERO, DE UNO POR VEZ. FINALIZA EL INGRESO DE LOS 
	// DATOS AL LEER UN VALOR NULO. INFORMAR:  
	//
	// A) LA CANTIDAD DE VALORES INGRESADOS COMPRENDIDOS ENTRE PI  Y  3PI.
	// B) EL MENOR VALOR INGRESADO.  
	
	Definir num, num_min, cant_num Como Entero
	
	cant_num <- 0
	num_min <- 0
	
	Repetir
		Escribir "Ingrese un numero entero"
		Leer num
		
		Si num > PI y num < 3*PI Entonces
			cant_num <- cant_num + 1
		FinSi
		
		si num < num_min Entonces
			num_min <- num
		FinSi
		
	Hasta Que num = 0
	
	Escribir "La cantidad de numeros entre PI y 3 PI es: ", cant_num
	Escribir "El menor valor ingresado es: ", num_min
	
	
FinAlgoritmo
