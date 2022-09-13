#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, i, K, s;
    int cont=1;
    scanf("%f %f %f %f", &n, &i, &K, &s);
        
		printf("Tabuada de soma:\n");  
    	while(cont<=K){	
    	printf("%.2f + %.2f = %.2f\n", n, i, n+i);
    	i+=s;	
    	cont++;
        }
       
        cont=1;
        i-=s*K;
		printf("Tabuada de subtracao:\n");  
       	while(cont<=K){	
    	printf("%.2f - %.2f = %.2f\n", n, i, n-i);
		i+=s;	
    	cont++;  	
        }
        
        cont=1;
        i-=s*K;
        printf("Tabuada de multiplicacao:\n");  
    	while(cont<=K){	
     	printf("%.2f x %.2f = %.2f\n", n, i, n*i);
     	i+=s;	
    	cont++;
        }
        
        cont=1;
        i-=s*K;
        printf("Tabuada de divisao:\n");       
    	while(cont<=K){	
    	printf("%.2f / %.2f = %.2f\n", n, i, n/i);
       	i+=s;	
    	cont++; 
        }		
    
  return 0;
}