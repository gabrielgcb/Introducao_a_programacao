#include <stdio.h>
#define MAX 100

 int main()
{
	int i;
	int tamanho;
	int vetor[MAX];
	int cont=1, aux=1;
	
	scanf("%d", &tamanho);
	
	for(i=0; i<tamanho; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<tamanho-1; i++){
		if(vetor[i+1]>vetor[i]){
			cont++;
			aux = cont;
		}
		else{
			cont=1;
		}
	}
	
	printf("O comprimento do segmento crescente maximo e: %d\n", aux);	  
  return 0;
}
