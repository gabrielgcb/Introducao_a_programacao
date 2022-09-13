#include <stdio.h>

int main()
{
    double i, n, soma;
	scanf("%lf", &n);
		
    if(n > 1){
     for(i = 1; i<=n; i++){
   		soma += (1/i);
	  }	  	  
    printf("%lf\n", soma); 			  
    }
   
	else {
	 printf("Numero invalido!\n");
	}
   
    return 0;
}