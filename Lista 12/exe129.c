#include <stdio.h>

 int main()
{
	int i, j;
	int tamL, tamC;
	
	scanf("%d %d", &tamL, &tamC);
	
	for(i=0; i<tamL; i++){
		for(j=0; j<tamC; j++){
			if(i%2==0){	
				if(j%2==0){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			else{
				if(j%2==0){
					printf("0");
				}
				else{
					printf("1");
				}
			}
		}
		printf("\n");
	}	  
  return 0;
}