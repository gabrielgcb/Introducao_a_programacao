#include <stdio.h>

int main()
{
	double fatorial=1;
	int n, cont;
	scanf("%d", &n);
	
	cont = n;
	while(cont>0){
		fatorial = fatorial*cont;		
		cont--;				
	}
	
	printf("%d! = %g\n", n, fatorial);
	
	return 0;		
}