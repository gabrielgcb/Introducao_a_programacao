#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c[10], f[10];
    int i, nCasos;
    scanf("%i", &nCasos);
        
    for(i=1; i<=nCasos; i++){
    	scanf("%lf", &f[i]);
        c[i] = (5*(f[i]-32))/9;   
	}
	
	for(i=1; i<=nCasos; i++){
   		printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", f[i], c[i]);   	     
    }
    printf("\n");
	    
    return 0;
}