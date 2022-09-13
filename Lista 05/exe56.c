#include <stdio.h>

int main()
{
    double a, r, aplicacao;
	int cont=1, meses;	
	scanf("%lf %lf %d", &a, &r, &meses);
	
	aplicacao = a*(1+r);
		
	while(cont<=meses){		
	    printf("a*(1+r)^%d = %.2lf, renda: %.2lf\n", cont, aplicacao, aplicacao-a);				    
		aplicacao *= (1+r);	
		cont++;
		}
			   	 	
 return 0;
}