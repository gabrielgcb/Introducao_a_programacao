#include <stdio.h>

 int main()
{
	int i, k =1, tamanho=1000, vetorA[tamanho], vetorB[tamanho], maior, menor;	
	scanf("%d", &tamanho);
	
	for(i=0; i<tamanho; i++){
		scanf("%d", &vetorA[i]);
	}
	
	for(i=0; i<tamanho; i++){
		printf("%d ", vetorA[i]);
	}
	printf("\n");
	
	for(i=0; i<tamanho; i++){
		vetorB[i] = vetorA[tamanho-k];
		printf("%d ", vetorB[i]);
		k++;
	}
	printf("\n");
	
	for(i=0; i<tamanho; i++){
		if(i==0){
			maior = vetorA[0];
			menor = vetorA[0];
		}	
		if(vetorA[i]>maior){
			maior = vetorA[i];
		}
		if(vetorA[i]<menor){
			menor = vetorA[i];
		}	
	}
		
	printf("%d\n%d\n", maior, menor);	   		
  return 0;
}