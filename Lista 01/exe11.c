#include <stdio.h>
#include <math.h>

	int main() 
{
	double massaT, massaKg, aceleracaoMS, aceleracaoKM, tempoS, tempoHr, velocidadeMS, velocidadeKM, espacoPercorrido, trabRealizado;
	
	scanf("%lf", &massaT);
	scanf("%lf", &aceleracaoMS);
	scanf("%lf", &tempoS);
	
	tempoHr = tempoS/3600;
	aceleracaoKM = aceleracaoMS * 3.6;
	massaKg = massaT*1000;
	velocidadeMS = aceleracaoMS * tempoS; 

	velocidadeKM = velocidadeMS * 3.6;
	
	espacoPercorrido = (aceleracaoMS * pow(tempoS,2))/2;
	
	trabRealizado = (massaKg * pow(velocidadeMS,2))/2;
	
	
	printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", velocidadeKM, espacoPercorrido, trabRealizado);


	return 0;
	
}