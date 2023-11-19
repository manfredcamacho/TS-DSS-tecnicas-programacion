Algoritmo Ejercicio_24
	//	UN NEGOCIO DE PERFUMERÍA EFECTÚA DESCUENTOS EN SUS VENTAS SEGÚN
	//	EL IMPORTE DE ESTAS, CON LA SIGUIENTE ESCALA:
	//
	//	MENOR  A 50 PESOS EL 3.5%
	//	ENTRE 50 Y 150 PESOS EL 10%
	//	ENTRE 151 Y 300 PESOS EL 20%
	//	MAYOR A 300 PESOS EL 25%
	//
	//	CONFECCIONAR UN PROGRAMA QUE SOLICITE UN PRECIO ORIGINAL E INFORME:
	//	EL DESCUENTO A EFECTUAR Y PRECIO NETO A COBRAR CON MENSAJES
	//	ACLARATORIOS. SE DEBE CONTEMPLAR QUE SE PUEDE INGRESAR VARIOS
	//	IMPORTES Y PARA FINALIZAR SE INGRESA UN VALOR NEGATIVO.
	
	Definir precio, descuento, precio_neto Como Real
	
	Escribir "Ingrese un precio: "
	Leer precio
	
	Mientras precio > 0 Hacer 
		descuento <- CalcularDescuento(precio)
		precio_neto <- precio - descuento
		
		Escribir "El descuento a efectuar es de: ", descuento
		Escribir "El precio neto es de: ", precio_neto
		Escribir ""
		
		Escribir "Ingrese un precio: "
		Leer precio
	FinMientras
	
FinAlgoritmo

Funcion descuento <- CalcularDescuento ( precio )
	Si precio < 50 Entonces
		descuento <- precio * 0.035
	SiNo 
		Si precio >= 50 y precio <= 150 Entonces
			descuento <- precio * 0.1
		SiNo 
			Si precio >= 151 y precio <= 300 Entonces
				descuento <- precio * 0.2
			SiNo
				descuento <- precio * .25
			FinSi
		FinSi
	FinSi	
Fin Funcion
