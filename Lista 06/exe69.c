#include <stdio.h>

int main() {
   int n, p1, p2, pi, i, flag = 1, a1 = 0, a2 = 0;
   scanf("%d %d %d",&n,&p1,&p2);
   scanf("%d",&pi); a1 = pi;
   if(pi==p1){ printf("OK\n");
               scanf("%d",&pi); a2 = pi;
               if(pi==p2) 
                 printf("OK\n");
                else flag =0;
             }else flag =0;
  i=2;
  while((i<n)&&(flag!=0)) {
	    scanf("%d",&pi); 
        if(pi==(a1+a2))
          printf("OK\n");
         else {flag = 0; break;}
        a1 = a2;
        a2 = pi;
        i++;
        
      }
    if(flag)
      printf("A serie informada e de Fibonacci\n");
     else printf("Nao e Fibonacci\n");
 return  0;
}