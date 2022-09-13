#include <stdio.h>

 int main()
{
	int i, j, aux, tamanho = 100000, vetor[tamanho];
	float mediana;
	
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
	
	if(tamanho % 2 != 0){	//exibição caso o número de termos seja ímpar
		for(i=0; i<tamanho; i++){
			mediana = (float) vetor[(tamanho-1)/2];
		}		
			printf("%.2f\n", mediana);
    }
    
    else{	//exibição caso o número de termos seja par
    	for(i=0; i<tamanho; i++){
			mediana = (float) vetor[tamanho/2] + vetor[(tamanho/2)-1];
		}		
			printf("%.2f\n", mediana/2);
    }  
  return 0;
}
