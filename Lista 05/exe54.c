#include <stdio.h>

int main()
{
	int i, numero, metade;
	scanf("%i", &numero);
	metade = numero/2;
	
	if(numero != 1){
    for(i=2; i<=metade; i++){
		if(numero %i == 0){	 
		printf("NAO PRIMO\n");	
		return 0;	 
	     }
	   }
	   
	   	printf("PRIMO\n");    
    }
	
	else{
	   printf("NAO PRIMO\n");	
	}
	
	return 0;		
}
