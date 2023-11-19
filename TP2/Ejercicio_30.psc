Algoritmo Ejercicio_30
	//	UNA CEREALERA  DESEA CLASIFICAR SUS CLIENTES DE ACUERDO A LAS TONELADAS QUE LE COMPRAN.
	//
	//	CLIENTE QUE COMPRA MENOS DE 100 TONELADAS: CHICO.
	//	CLIENTE QUE COMPRA ENTRE 100 Y 300 TONELADAS: MEDIANO.
	//	CLIENTE QUE COMPRA MÁS DE 300 TONELADAS: GRANDE.
	//
	//	SE DESEA DISEÑAR UN ALGORITMO QUE PERMITA EL INGRESO DE LAS TONELADAS POR CLIENTE. FINALIZA EL 
	//	INGRESO DE DATOS CUANDO SE INGRESE UN CLIENTE IGUAL A 000.
	//	LUEGO MUESTRE LA SIGUIENTE INFORMACIÓN POR PANTALLA: CANTIDAD DE CLIENTES, PROMEDIO DE TONELADAS
	//	VENDIDAS POR CATEGORÍA Y EL TOTAL DE TODAS LAS TONELADAS VENDIDAS.
	
	Definir categoria, cod_cliente Como Caracter
	Definir toneladas, total_toneladas, sum_ton_chico, sum_ton_mediano, sum_ton_grande Como Real
	Definir total_clientes, cant_cli_chico, cant_cli_mediano, cant_cli_grande Como Entero
	
	Escribir "Ingrese su codigo de cliente: (000 para finalizar)"
	Leer cod_cliente
	
	Mientras cod_cliente <> "000" Hacer
		Escribir "Ingrese la cantidad de toneladas a comprar: "
		Leer toneladas
		
		categoria <- calcularCategoria(toneladas)
		total_toneladas <- total_toneladas + toneladas
		total_clientes <- total_clientes + 1
		
		Segun categoria Hacer
			Opcion "CHICO":
				sum_ton_chico <- sum_ton_chico + toneladas
				cant_cli_chico <- cant_cli_chico + 1
			Opcion "MEDIANO":
				sum_ton_mediano <- sum_ton_mediano + toneladas
				cant_cli_mediano <- cant_cli_mediano + 1
			Opcion "GRANDE":
				sum_ton_grande <- sum_ton_grande + toneladas
				cant_cli_grande <- cant_cli_grande + 1
		FinSegun
		
		Escribir "Dato registrado!"
		Escribir ""
		Escribir "Ingrese su codigo de cliente: (000 para finalizar)"
		Leer cod_cliente
		
	FinMientras

	prom_ton_chico <- CalcularPromedio( sum_ton_chico, cant_cli_chico)
	prom_ton_mediano <- CalcularPromedio( sum_ton_mediano, cant_cli_mediano)
	prom_ton_grande <- CalcularPromedio( sum_ton_grande, cant_cli_grande)
	
	Escribir ""
	Escribir "El total de clientes es de : ", total_clientes
	Escribir "Se vendio en total ", total_toneladas, " Toneladas"
	Escribir "Por categoria en promedio se vendio:"
	Escribir " * CHICO: ", prom_ton_chico, " Toneladas"
	Escribir " * MEDIANO: ", prom_ton_mediano, " Toneladas"
	Escribir " * GRANDE: ", prom_ton_grande, " Toneladas"
	
FinAlgoritmo

Funcion categoria <- calcularCategoria(toneladas)
	Si toneladas < 100 Entonces
		categoria <- "CHICO"
	SiNo
		Si toneladas >= 100 y toneladas <= 300 Entonces
			categoria <- "MEDIANO"
		SiNo
			categoria <- "GRANDE"
		FinSi
	FinSi
FinFuncion

Funcion promedio <- CalcularPromedio(sumatoria, cantidad)
	Si cantidad <= 0 Entonces
		promedio = 0
	SiNo
		promedio <- sumatoria / cantidad
	FinSi
FinFuncion
