#include <stdio.h>

 unsigned long int fatorial (unsigned int n);

 int main()
{
    unsigned int n;
    unsigned long int resultado;
    
	scanf("%d", &n);
	
	resultado = fatorial(n);
	printf("%u! = %lu\n", n, resultado);
	
  return 0;
}

 unsigned long int fatorial (unsigned int n)
{
	int i;
    unsigned long int fat;
	
	fat = n;
	for(i=n-1; i>0; i--){
		fat *= i;
	}
	
  return fat;
}
