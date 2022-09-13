#include <stdio.h>

 int main()
{
	int i, j;
	int tamanho=100;
	int matriz[tamanho][tamanho];
	
	scanf("%d", &tamanho);
	for(i=0; i<tamanho; i++){
		for(j=0; j<tamanho; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	j=0;
	for(i=0; i<tamanho; i++){
		printf("%d\n", matriz[i][j]);
		j++;
	}	  
  return 0;
}