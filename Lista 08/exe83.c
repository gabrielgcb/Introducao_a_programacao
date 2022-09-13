#include <stdio.h>
#define MAX 10000

 int main()
{
	int i, j, tamanho, vetorA[MAX], maior, cont=0;
	
	do{
		scanf("%d", &tamanho);
		if(tamanho == 0){
			return 0;
		}
		else{	
			for(i=0; i<tamanho; i++){
				scanf("%d", &vetorA[i]);
			
				if(i==0){
					maior = vetorA[0];
				}
				if(vetorA[i]>maior){
					maior = vetorA[i];
				}
			}
			
			for(j=0; j<=maior; j++){
				printf("(%d) ", j);
				cont=0;
				i=0;
				while(i<tamanho){
					if(vetorA[i]<=j)
					cont++;
					i++;
				}		
					printf("%d\n", cont);			
			}
	    }
    }while(tamanho!=0);
  return 0;
}