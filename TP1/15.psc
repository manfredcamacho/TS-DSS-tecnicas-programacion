Algoritmo Ejercicio_15
	
	// 15.-Dada una compra de 30 PC para una empresa y sabiendo que
	// cada una cuesta 11500 pesos.
	// 		* Sé que el proveedor me hace un 20% de descuento.
	// 		* Sé que el envío me cobra un 5% del total.
	// 		* Sé que el seguro de traslado es 12% del total el cual se 
	//			devuelven si los equipos llegan bien.
	// 
	// Obtener el precio sin descuentos. 
	// El precio con todos los descuentos si todas las PC llegan bien. 
	// El precio con todos los descuentos si las PC llegan Mal. 
	// Solamente el precio del descuento, 
	// Solamente el precio del envío.

	Definir PRECIO_U, PORC_DESCUENTO, PORC_ENVIO, PORC_SEGURO, total, descuento Como Real
	Definir CANTIDAD Como Entero
	
	CANTIDAD <- 30
	PRECIO_U <- 11500
	PORC_DESCUENTO <- 0.2
	PORC_ENVIO <- 0.05
	PORC_SEGURO <- 0.12
	
	subtotal <- PRECIO_U * CANTIDAD
	descuento <- subtotal * PORC_DESCUENTO
	seguro <- subtotal * PORC_SEGURO
	envio <- subtotal * PORC_ENVIO
	
	total_sin_desc <- subtotal
	total_con_desc_envio_OK <- subtotal + envio - descuento
	total_con_desc_envio_no_OK <- subtotal + envio + seguro - descuento
	
	Escribir "El total sin descuentos es: $", total_sin_desc
	Escribir "El total con descuentos y las PCs llegan bien es: $", total_con_desc_envio_OK
	Escribir "El total con descuentos y las PCs no llegan bien es: $", total_con_desc_envio_no_OK
	Escribir "El precio del descuento es: $", descuento
	Escribir "El precio del envio es: $", envio
	
	
FinAlgoritmo
