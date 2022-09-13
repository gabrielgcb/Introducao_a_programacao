#include <stdio.h>

 int main()
{
	int i, j;
	float matriz[2][2];
	float novaMatriz[2][2];
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%f", &matriz[i][j]);
		}
	}
	
	novaMatriz[0][0] = matriz[0][0]*matriz[0][0] + matriz[0][1]*matriz[1][0];
	novaMatriz[0][1] = matriz[0][0]*matriz[0][1] + matriz[0][1]*matriz[1][1];
	novaMatriz[1][0] = matriz[1][0]*matriz[0][0] + matriz[1][1]*matriz[1][0];
	novaMatriz[1][1] = matriz[1][0]*matriz[0][1] + matriz[1][1]*matriz[1][1];

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%.3f", novaMatriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");	  
  return 0;
}
