Algoritmo Ejercicio_26
	//	ESCRIBIR UN ALGORITMO PARA SUMAR LOS NÚMEROS ENTEROS DE 1 A 100
	//	UTILIZANDO: 
	//
	//	A) ESTRUCTURA FOR; 
	//	B) ESTRUCTURA MIENTRAS; 
	//	C) ESTRUCTURA HACER MIENTRAS
	
	Escribir "Sumar del 1 al 100"
	Escribir ""
	Escribir "Resultado estructura Para ", SumarPara
	Escribir "Resultado estructura Mientras ", SumarMientras
	Escribir "Resultado estructura Hacer Mientras ", SumarHacerMientras
	
FinAlgoritmo


Funcion resultado <- SumarPara	
	Para contador <- 1 Hasta 100 Con Paso 1 Hacer
		resultado <- resultado + contador
	FinPara
FinFuncion

Funcion resultado <- SumarMientras	
	contador <- 1
	Mientras contador <= 100 Hacer 
		resultado <- resultado + contador
		contador <- contador + 1
	FinMientras
FinFuncion

Funcion resultado <- SumarHacerMientras	
	contador <- 1
	Repetir
		resultado <- resultado + contador
		contador <- contador + 1
	Hasta que contador > 100
FinFuncion

	