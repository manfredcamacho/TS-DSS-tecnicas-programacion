Algoritmo Ejercicio_14
	
	// 14.- Desarrolle un algoritmo para calcular el importe de una venta
	// en un supermercado. El usuario debe ingresar  el nombre del producto,
	// el precio por unidad y el número de unidades. El programa mostrará 
	// por pantalla el nombre del producto, el número de unidades vendidas
	// y el precio total.
	
	
	Definir precio_unidad, total Como Real
	Definir cantidad Como Entero
	Definir producto Como Caracter
	
	Escribir "Ingrese el nombre del producto: "
	Leer producto
	
	Escribir "Ingrese el precio por unidad: "
	Leer precio_unidad
	
	Escribir "Ingrese el numero de unidades: "
	Leer cantidad
	
	Escribir "TOTAL VENTAS"
	Escribir "-----------------------"
	Escribir producto, "    ", cantidad, " u.   $", cantidad * precio_unidad 
	
	
FinAlgoritmo
