#include <stdio.h>

 int main()
{
	int cont = 1, n, somaPar = 0, contPar=0, somaImpar = 0, contImpar=0;
	float mediaPar, mediaImpar;
	
	do{
		scanf("%d", &n);
			if(n%2==0 && n!=0){
				contPar++;
		    	somaPar +=n;
				mediaPar = (float)somaPar/contPar;	
			} 
			
			if(n%2!=0 && n!=0){	
				contImpar++;
				somaImpar +=n;	
				mediaImpar = (float)somaImpar/contImpar;	
	        }
	  		
	} while(n!=0);
    
	printf("MEDIA PAR: %f\nMEDIA IMPAR: %f\n", mediaPar, mediaImpar);
      
  return 0;
}