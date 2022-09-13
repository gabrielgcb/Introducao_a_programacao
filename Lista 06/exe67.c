#include <stdio.h>
#define MAX 100

 int main()
{
	int i, tamanho, cont=0;
	float vetor[MAX];
	
	do{
		scanf("%d", &tamanho);
		if(tamanho!=0){
			cont=0;
			for(i=0; i<tamanho; i++){
				scanf("%f", &vetor[i]);
			}
			
			for(i=0; i<tamanho-1; i++){
				if(vetor[i]<vetor[i+1])
					cont++;
			}
			
			if(cont == (tamanho-1))
				printf("ORDENADA\n");
			else
				printf("DESORDENADA\n");
		}	
			
	} while(tamanho!=0);				
  return 0;
}