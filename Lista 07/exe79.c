#include <stdio.h>

 int main()
{
	int i, k = 0, tamanho=500, valoresA[tamanho], valoresB[tamanho];
	
	scanf("%d", &tamanho);
	
	for(i=0; i<tamanho; i++){
		scanf("%d", &valoresA[i]);				
    }

	for(i=0; i<tamanho; i++){
		valoresB[i] = valoresA[(tamanho-1)-k];
		printf("%d ", valoresB[i]);
		k++;
    }  
  return 0;
}