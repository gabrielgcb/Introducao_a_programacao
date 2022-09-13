#include <stdio.h>

int grauAco(int carbono, int dureza, int resistencia);	//Prototipo da funcao

int main()
{
	int carbono;
	int dureza;
	int resistencia;
	
	scanf("%d %d %d", &carbono, &dureza, &resistencia);
	grauAco(carbono, dureza, resistencia);
	
  return 0;
}

int grauAco(int carbono, int dureza, int resistencia)
{
	int grauAco;
	if(carbono < 7 && dureza > 50 && resistencia > 80000){
		grauAco = 10;
		printf("ACO DE GRAU = %d\n", grauAco);
	} 
	else if(carbono < 7 && dureza > 50 && resistencia <= 80000){
		grauAco = 9;
		printf("ACO DE GRAU = %d\n", grauAco);
	}
	else if(carbono < 7 && dureza <= 50 && resistencia <= 80000){
		grauAco = 8;
		printf("ACO DE GRAU = %d\n", grauAco);
	}
	else{
		grauAco = 7;
		printf("ACO DE GRAU = %d\n", grauAco);
	}
	
  return grauAco;
}
