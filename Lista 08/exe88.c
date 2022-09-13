#include <stdio.h>

 int main()
{
	int i, j, aux, tamanho = 1000, vetor[tamanho];
	
	scanf("%d", &tamanho);	
	
	for(i=0; i<tamanho; i++){	//leitura dos valores do vetor
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<tamanho; i++){	//ordenação dos valores do vetor
		for(j=i+1; j<tamanho; j++){
			if(vetor[i]>vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
		for(i=0; i<tamanho; i++){	//exibicao dos valores do vetor
			printf("%d\n", vetor[i]);
		}      
  return 0;
}