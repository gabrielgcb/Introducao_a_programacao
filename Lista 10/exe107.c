#include <stdio.h>
#define MAX 100

int indice_sorteada();

int qtd = 0;
int cont = 0;

int main()
{	
	do{
		scanf("%d", &qtd);	
		if(qtd!=0){
		indice_sorteada();
		}	
	} while(qtd!=0);
	
  return 0;
}

int indice_sorteada()
{
	int i;
	int vetor[MAX];
	int sorteada;
	
	for(i=1; i<=qtd; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i=1; i<=qtd; i++){
		if(i==vetor[i]){
		sorteada = i;
		}
	}
	
	cont++;	
	printf("Teste %d\n", cont);
	printf("%d\n\n", sorteada);	
		
  return sorteada;
}

