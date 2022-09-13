#include <stdio.h>
#include <math.h>

	int main() 
{
	float precoFabrica, percentualDistribuidor, percentualImpostos, valorCarro;
	
	scanf("%f", &precoFabrica);
	scanf("%f", &percentualDistribuidor);
	scanf("%f", &percentualImpostos);

	valorCarro = precoFabrica * (1 + ((percentualDistribuidor + percentualImpostos)/100));
	
	printf("O VALOR DO CARRO E = %.2f\n", valorCarro);


	return 0;
}