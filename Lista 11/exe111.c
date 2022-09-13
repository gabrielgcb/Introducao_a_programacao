#include <stdio.h>

 int digit_count(long int n);
 
 int main()
{	
	long int n;
	int resultado;
	
	scanf("%ld", &n);
	
	resultado = digit_count(n);

    printf("Numero de digitos: %d\n", resultado);	
		
  return 0;
}

 int digit_count(long int n)
{
	int cont = 0;
	
	while(n>=1){
		n = n/10;
		cont++;
	}
 	 	
  return cont;   	
}
