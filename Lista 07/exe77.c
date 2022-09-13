#include <stdio.h>

 int main()
{
	int i, n, cont=0, tamanho=1000, vetorA[tamanho];
	
	do{
	scanf("%d", &tamanho);
	} while(tamanho == 0 || tamanho <1 || tamanho > 1000);
	
	for(i=0; i<tamanho; i++){
		scanf("%d", &vetorA[i]);
	}
	
	scanf("%d", &n);
	
	for(i=0; i<tamanho; i++){
		if(vetorA[i] >= n){
			cont++;
		}
	}
 
	printf("%d\n", cont);
  return 0;
}