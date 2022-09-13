#include <stdio.h>
#define MAX 1000

 int main()
{
	int i, j, k=1, cont=0, tamanho, vetor[MAX];
	scanf("%d", &tamanho);
	
	for(i=0; i<tamanho; i++){
		scanf("%d", &vetor[i]);		
	}
	
	for(i=0; i<tamanho; i++){
		for(j=i+1; j<tamanho; j++){
			if(vetor[i]!=vetor[j]){
				cont++;
			}
		}
		if(cont==tamanho-k){
			printf("%d\n", vetor[i]);
		}
		k++;
		cont=0;
	}
  return 0;
}