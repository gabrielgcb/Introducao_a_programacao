#include <stdio.h>
#define MAX 100000

 int main()
{
	int i, j, k, tamanho, vetor[MAX], aux;
	scanf("%d", &tamanho);
	
	for(i=0; i<tamanho; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<tamanho; i++){
		for(j=i+1; j<tamanho; j++){
			if(vetor[i]>vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
		    }
		}		
	}
	 	  
	for(i=0; i<tamanho; i++){
		if(vetor[i]%2==0)
		printf("%d\n", vetor[i]);
	}
	
	for(i=tamanho-1; i>=0; i--){
		if(vetor[i]%2!=0)
		printf("%d\n", vetor[i]);
	}
  return 0;
}