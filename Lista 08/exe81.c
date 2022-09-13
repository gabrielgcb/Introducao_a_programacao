#include <stdio.h>

 int main()
{
	int i, n, cont, tamanho = 10000, vetor[tamanho], maior, indiceMaior;
		
    do{
	scanf("%d", &tamanho); 
	if(tamanho!=0){	
		for(i=0; i<tamanho; i++){
			scanf("%d", &vetor[i]);
			
			if(i==0){
				maior = vetor[0];
				indiceMaior = i;
			}
			
			if(vetor[i]>maior){
				maior = vetor[i];
				indiceMaior = i;
			}
		}  		
		printf("%d %d\n", indiceMaior, maior);									
    }
    
	}while(tamanho!=0);	   		
  return 0;
}
