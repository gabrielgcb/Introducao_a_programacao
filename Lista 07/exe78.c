#include <stdio.h>

 int main()
{
	int i, k = 0, tamanho=1000, valoresA[tamanho];
	
	scanf("%d", &tamanho);
	
	for(i=0; i<tamanho; i++){
		scanf("%d", &valoresA[i]);	
    }
    
	for(i=0; i<tamanho; i++){ 
		if(valoresA[i] % 2 == 0){
		printf("%d ", valoresA[i]);
		k++;		
        }
    }
    
	printf("%d\n", k);     		 
  return 0;
}