#include <stdio.h>

 int main()
{
	int i, j;
	float vetor[2][2];
	float determinante;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%f", &vetor[i][j]);
		}
	}
	
	determinante = vetor[0][0]*vetor[1][1] - vetor[1][0]*vetor[0][1];
	printf("%.2f\n", determinante);	  
  return 0;
}
