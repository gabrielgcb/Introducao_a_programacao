#include <stdio.h>

 int main()
{
    int n, metade, soma = 0, cont;
    scanf("%d", &n);
    metade = n/2;
    
		
    printf("%d = ", n);	

	    for(cont=1; cont<=metade; cont++){
	    	if(n % cont == 0){
				soma += cont;   	
					
				printf("%d", cont);	   
		  	
				if(cont<metade){
				printf(" + ");
			    }
			    else{
			    printf(" = %d ", soma);
				}
		    }
		    
	    }
	
	 	if(soma == n)		   
			printf("(NUMERO PERFEITO)\n", n);
		
		else{
			printf("(NUMERO NAO E PERFEITO)\n", n);
		}
	
 return 0;
}