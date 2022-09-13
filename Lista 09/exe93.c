#include <stdio.h>
#define MAX 5000

 int main()
{
	int i, j, k=1, cont=0, tamanho, vetor[MAX], soma=0;
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
			soma++;
		}
		else{
			soma--;
		}
		
		k++;
		cont=0;
	}
	
	printf("%d\n", soma);
  return 0;
}