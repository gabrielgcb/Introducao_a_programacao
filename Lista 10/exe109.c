#include <stdio.h>

#define MAX 100

 int fibonacci(int t1, int t2, int n);

 int main()
{
	int t1, t2;
	int n;
	int resultado;
	
	scanf("%d %d %d", &t1, &t2, &n);
	
	resultado = fibonacci(t1, t2, n);
	printf("%d\n", resultado);
	
  return 0;
}

 int fibonacci(int t1, int t2, int n)
{
 	int i;
 	int vetor[MAX];
 	int valor_enesimo_termo;
 	
 	vetor[1] = t1;
 	vetor[2] = t2;
 	for(i=1; i<=n; i++){
 		vetor[i+2] = vetor[i] + vetor[i+1];
 		if(i == n){
 			vetor[n] = vetor[i-1] + vetor[i-2];
  			valor_enesimo_termo = vetor[n];
		}
	}
	
  return valor_enesimo_termo;
}