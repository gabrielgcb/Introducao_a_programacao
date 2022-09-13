#include <stdio.h>
#define MAX 10000

 int main()
{
	int i, tamanho, vetor[MAX], cont=0, maior, indiceMaior;
	
	scanf("%d", &tamanho);		
	for(i=0; i<tamanho; i++){	
		scanf("%d", &vetor[i]);
	}
	printf("Nota %d,", vetor[tamanho-1]);
	
	for(i=0; i<tamanho; i++){
			if(vetor[i]==vetor[tamanho-1])
			cont++;	
	}
    if(cont==1)
	printf(" %d vez\n", cont);
	else
	printf(" %d vezes\n", cont);

	
	for(i=0; i<tamanho; i++){
		if(i==0){
			maior = vetor[0];
			indiceMaior = i;
		}
		
		else{
			if(vetor[i]>maior){
				maior = vetor[i];
				indiceMaior = i;
			}
		}
	}
	
	printf("Nota %d, indice %d\n", maior, indiceMaior);
  return 0;
}