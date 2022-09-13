#include <stdio.h>

#define MAX 100

double le_numero();

int qtd;

int main()
{	
	scanf("%d", &qtd);
	le_numero();
  return 0;
}

double le_numero()
{
	int i;
	double vetor[MAX];
	double soma=0;
	double media=0;
	
	for(i=0; i<qtd; i++){
		scanf("%lf", &vetor[i]);
		soma += vetor[i];
	}
	
	media = soma/qtd;
	printf("%.2lf\n", media);	
  return media;
}
