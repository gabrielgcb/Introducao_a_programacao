#include <stdio.h>

 int main()
{
	int i, j;
	int linhas=0, colunas=0;
	int k=1;
	
	scanf("%d %d", &linhas, &colunas);
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(i%2==0){
				if(j%2==0){
					printf("0 ");
				}
				else{
					printf("%d ", k);
				    k++;	
				}
			}
			else{
				if(j%2==0){
					printf("%d ", k);
			      	k++;					
				}
				else{
					printf("0 ");
				}
			}
		}
	printf("\n");
	}
   return 0;
}