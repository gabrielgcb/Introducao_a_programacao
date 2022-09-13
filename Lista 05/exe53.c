#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, numero, cont=0;
    scanf("%d", &numero);
    
    if(numero<2)
    printf("Campeonato invalido!\n");  
    else for(i=1; i<numero; i++){
	    for(j=i+1; j<=numero; j++){
		cont++;
        printf("Final %d: Time%d X Time%d\n", cont, i, j);
       }
    }
  return 0;
}