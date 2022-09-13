#include <stdio.h>


	int main() 
{
	int valor, valor100, resto100, valor50, resto50, valor10, resto10, valor1, resto1;
	scanf("%i", &valor);
	
	valor100 = valor/100;
	resto100 = valor%100;
	
	valor50 = resto100/50;
	resto50 = resto100%50;
	
	valor10 = resto50/10;
	resto10 = resto50%10;
	
	valor1 = resto10/1;
	resto1 = resto10%1;
	
	printf("NOTAS DE 100 = %i\nNOTAS DE 50 = %i\nNOTAS DE 10 = %i\nMOEDAS DE 1 = %i\n", valor100, valor50, valor10, valor1);

	return 0;
}
