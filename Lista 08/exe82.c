#include <stdio.h>

 int main()
{
	int i, tamanho=5000, valores[tamanho], soma = 0;
	
	scanf("%d", &tamanho);
		
	for(i=0; i<tamanho; i++){
		scanf("%d", &valores[i]);
		soma += valores[i];
	}	
	
	printf("%d\n", soma);    
  return 0;
}