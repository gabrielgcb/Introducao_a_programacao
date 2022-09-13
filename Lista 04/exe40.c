#include <stdio.h>

#define TAM 10
 
	int main() 
{
	double nPessoas, popular, geral, arquibancada, cadeiras, renda[TAM];
	int i, nCasos;
	
	scanf("%i", &nCasos);
					
	for(i = 1; i <= nCasos; i++){
    	scanf("%lf %lf %lf %lf %lf", &nPessoas, &popular, &geral, &arquibancada, &cadeiras);	    		
		renda[i] = (popular*nPessoas/100)*1 + (geral*nPessoas/100)*5 + (arquibancada*nPessoas/100)*10 + (cadeiras*nPessoas/100)*20;	   
	}
	
	printf("\n");
	 	
	for(i = 1; i<= nCasos; i++){	
		printf("A RENDA DO JOGO N. %i E = %.2lf\n", i, renda[i]);			
	}	

  return 0;
}
