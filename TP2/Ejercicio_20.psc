Algoritmo Ejercicio_20
	// UNA EMPRESA TIENE 4 VENDEDORES. CADA VENDEDOR CUANDO REALIZA UNA 
	// VENTA EMITE UNA FACTURA. SE PROCESAN LOS DATOS HASTA  QUE SE INGRESA
	// UN NUMERO DE FACTURA IGUAL 0.  LOS DATOS INGRESADOS DE LA FACTURA 
	// SON: Nº DE FACTURA, Nº DE VENDEDOR, MONTO DE LA FACTURA. SE DESEA 
	// CALCULAR E INFORMAR:
	
	// A.	CUANTAS FACTURAS EMITIÓ CADA VENDEDOR.
	// B.	TOTAL FACTURADO POR CADA VENDEDOR Y EL TOTAL FINAL ACUMULADO
	// 		DE LOS VENDEDORES.
	
	
	Definir nro_factura, nro_vendedor, cant_fact_vend_1, cant_fact_vend_2, cant_fact_vend_3, cant_fact_vend_4 Como Entero
	Definir monto_factura, total_vend_1, total_vend_2, total_vend_3, total_vend_4 Como Real
	
	Repetir
		Escribir "Ingrese su nro de vendedor: "
		Leer nro_vendedor
		
		Escribir "Ingrese el nro de factura: "
		Leer nro_factura
		
		Escribir "Ingrese el monto de la factura: "
		Leer monto_factura
		
		segun nro_vendedor Hacer
			1:
				total_vend_1 <- total_vend_1 + monto_factura
				cant_fact_vend_1 <- cant_fact_vend_1 + 1
			2:
				total_vend_2 <- total_vend_2 + monto_factura
				cant_fact_vend_2 <- cant_fact_vend_2 + 1
			3:
				total_vend_3 <- total_vend_3 + monto_factura
				cant_fact_vend_3 <- cant_fact_vend_3 + 1
			4:
				total_vend_4 <- total_vend_4 + monto_factura
				cant_fact_vend_4 <- cant_fact_vend_4 + 1
			De Otro Modo:
				Escribir "El numero de vendedor ingresado es invalido."
		FinSegun
		
	Hasta Que nro_factura = 0
	
	Escribir "==========================="
	Escribir "RESULTADOS:"
	Escribir "==========================="
	Escribir "VENDEDOR 1"
	Escribir "	* Facturas: ", cant_fact_vend_1
	Escribir "	* Total:	", total_vend_1
	Escribir "___________________________"
	Escribir "VENDEDOR 2"
	Escribir "	* Facturas: ", cant_fact_vend_2
	Escribir "	* Total:	", total_vend_2
	Escribir "___________________________"
	Escribir "VENDEDOR 3"
	Escribir "	* Facturas: ", cant_fact_vend_3
	Escribir "	* Total:	", total_vend_3
	Escribir "___________________________"
	Escribir "VENDEDOR 4"
	Escribir "	* Facturas: ", cant_fact_vend_4
	Escribir "	* Total:	", total_vend_4
	Escribir "==========================="
	Escribir ""
	Escribir "TOTAL: ", total_vend_1 + total_vend_2 + total_vend_3 + total_vend_4
	Escribir ""
	Escribir "==========================="
	
	
	
FinAlgoritmo
