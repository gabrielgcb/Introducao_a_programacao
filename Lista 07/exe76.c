#include <stdio.h>
#define MAX 100000

 int main()
{
	int i=0, k, j, buscas, tamanho, vetor[MAX], cont;
	scanf("%d", &tamanho);	
		
	for(i=0; i<tamanho; i++){	//leitura dos valores do vetor
		scanf("%d", &vetor[i]);
	}
	
	scanf("%d", &buscas);	//qtd de buscas e valores a serem procurados
	for(j=0; j<buscas; j++){
		scanf("%d", &k);
		i=0;
		while(i<tamanho && k!=vetor[i]){
			i++;
		}	
			if(tamanho==i){
				printf("NAO ACHEI\n");
			}
			else{
				printf("ACHEI\n");
			}
	}	  
  return 0;
}