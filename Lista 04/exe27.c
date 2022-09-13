#include <stdio.h>

int main(){
 int num,m,c,d,u;
 scanf("%d",&num);
 if((num>9999)||(num<=0))
    printf("Numero invalido!\n");
   else { if(num>999) {
	         printf("(quarta ordem) %d = ",num);
	         m = num/1000;
	         c=(num - m*1000)/100; 
	         d = (num - m*1000 -c*100)/10;
	         u = (num - m*1000 -c*100 - d*10);
	         if(m>1)
	           printf("%d unidades de milhar ",m);
	          else printf("%d unidade de milhar ",m);
	         if(c>0) {
			   if(c>1)
	             printf("+ %d centenas ",c);
	            else printf("+ %d centena ",c);
	          }
	         if(d>0) {
	           if(d>1)
	             printf("+ %d dezenas ",d);
	            else printf("+ %d dezena ",d);
	          }
	         if(u>0){
	           if(u>1)
	             printf("+ %d unidades ",u);
	            else printf("+ %d unidade ",u);
	           }
	         printf("= %d ",m*1000);
	         if(c>0)
	           printf("+ %d ",c*100);
	         if(d>0)
	           printf("+ %d ",d*10);
	         if(u>0)
	           printf("+ %d",u);
	         printf("\n");
	   
   }else if(num>99) {
	        printf("(terceira ordem) %d = ",num);
	        c = num/100;
	        d = (num - c*100)/10;
	        u = num%10;
	       if(c>1)
	         printf("%d centenas ",c);
	        else printf("%d centena ",c);
	        if(d>0) {
	           if(d>1)
	             printf("+ %d dezenas ",d);
	            else printf("+ %d dezena ",d);
	          }
	         if(u>0){
	           if(u>1)
	             printf("+ %d unidades ",u);
	            else printf("+ %d unidade ",u);
	           }
	          printf("= %d ",c*100);
	         if(d>0)
	           printf("+ %d ",d*10);
	         if(u>0)
	           printf("+ %d",u);
	         printf("\n");
   }else if(num>9){
	        printf("(segunda ordem) %d = ",num);
	        d = num/10;
	        u = num%10;
	        if(d>1)
	         printf("%d dezenas ",d);
	        else printf("%d dezena ",d);
	        if(u>0){
	           if(u>1)
	             printf("+ %d unidades ",u);
	            else printf("+ %d unidade ",u);
	           }
	         printf("= %d ",d*10); 
	         if(u>0)
	           printf("+ %d",u);
	         printf("\n");
	   
   }else {printf("(primeira ordem) %d = ",num);
	      u = num;
	      if(u>1)
	         printf("%d unidades ",u);
	        else printf("%d unidade ",u);
	      printf("= %d\n",u);
         }
   }
 
return 0;
}
