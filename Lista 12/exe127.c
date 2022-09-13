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
	
	i=0;
	for(j=tamanho-1; j>=0; j--){
		printf("%d\n", matriz[i][j]);
		i++;
	}	  
  return 0;
}