#include <stdio.h>

 int somaDivisores(int n);
 
 int main()
{	
	int n;
	int resultado;
	
	scanf("%d", &n);
	
	resultado = somaDivisores(n);
	
	if(resultado == n){
		printf("(NUMERO PERFEITO)\n");
	}
	else{
		printf("(NUMERO NAO E PERFEITO)\n");
	}
	
  return 0;
}

 int somaDivisores(int n)
{
	int i;
	int metade;
	int soma = 0;
	
	metade = n/2;
	
	printf("%d = ", n);
	for(i=1; i<=metade; i++){
		if(n % i == 0){
			soma += i;
			
			printf("%d", i);
				
			if(i<metade)
				printf(" + ");
			else{
				printf(" = %d ", soma);
			}
		}
	}	
  return soma;
} 
