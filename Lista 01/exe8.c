#include <stdio.h>
#include <math.h>

	int main() 
{
	float raioLata, alturaLata, areaCirculo, areaLateral, areaTotal, custo;
	
	scanf("%f", &raioLata);
	scanf("%f", &alturaLata);
	
	areaCirculo = 3.14159 * pow(raioLata,2);
	areaLateral = 2 * 3.14159 * raioLata * alturaLata;
	areaTotal = 2*areaCirculo + areaLateral;
	
	custo = areaTotal * 100;
	
	
	printf("O VALOR DO CUSTO E = %.2f\n", custo);


	return 0;
}