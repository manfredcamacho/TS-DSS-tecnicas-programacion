#include <stdio.h>
#include <stdlib.h>

/* 
	SE REALIZA UNA ENCUESTA ENTRE 100 PERSONAS QUE VOTAN POR LOS CANDIDATOS 
	A O B. 
	SE PIDE INFORMAR LOS PORCENTAJES OBTENIDOS POR CADA CANDIDATO.
*/

extern void exercise_14() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 14      **\n");
	printf("\t\t***************************\n\n");
		
	int i, randomVote, VOTERS_QUANTITY = 100;
	float sumA = 0, sumB = 0;
	
	for(i = 0; i < VOTERS_QUANTITY; i++){
		//Generating random vote, 0 for canditate A and 1 for candidate B
		randomVote = (rand() > RAND_MAX / 2) ? 0 : 1;
		
		if(randomVote == 0)
			sumA++;
		else
			sumB++;
	}
	
	printf("\nRESULTADOS");
	printf("\n-----------------");
	printf("\nCandidato A: %.2f%%", (sumA / VOTERS_QUANTITY) * 100);
	printf("\nCandidato B: %.2f%%", (sumB / VOTERS_QUANTITY) * 100);
	
}
