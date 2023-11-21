#include <stdio.h>
#include <stdlib.h>

/* 
	Se obtiene un archivo que tiene los siguientes datos: código, producto, 
	peso.
	
	Está cargado de la siguiente manera:
	 
	Cod_Prod		Producto			Peso
	8				asado				5 kg
	2				bife				3 kg
	4				lomo				8 kg
	15				paleta				5 kg
	7				nalga				9 kg.
	
	Se pide cargar y recorrer el archivo.
	Cargar un vector con los nombres de los productos ingresados ordenadamente 
	por el código de producto ó sea 
	
	ver[0]="bife", ver[1]="lomo", ver[2]="nalga"......

*/

int exercise_5() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 5      **\n");
	printf("\t\t***************************\n\n");
	
	FILE *archivo = fopen("productos.txt", "r");
	
	if(archivo == NULL){
		printf("No se pudo abrir el archivo productos.txt");
		return 1;
	}
	
	int codProducto, i = 0;
	float peso;
	char vec[100][20] = {""};
	char producto[20];
	char kg[2];
	
	while(fscanf(archivo, "%d\t%s\t%f %s", &codProducto, producto, &peso, kg) == 4){
		strcpy(vec[codProducto], producto);
		i++;
	}
	
	i = 0;
	
	for(i = 0; i< 100; i++){
		if(strcmp(vec[i], "") != 0)
			printf("vec[%d] = %s\n", i, vec[i]);
	}
		
	fclose(archivo);
}


