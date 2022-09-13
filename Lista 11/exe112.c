#include <stdio.h>

 void inverter_numero(int n);

 int main()
{
	int n;
	
	scanf("%d", &n);
	
	inverter_numero(n);
	
  return 0;
}

 void inverter_numero(int n)
{
	int div1, rest1;
	int div2, rest2;
	int div3;
	
	div1 = n / 100;
	rest1 = n % 100;
	div2 = rest1 / 10;
	rest2 = rest1 % 10;
	div3 = rest2;
	
	printf("%d%d%d\n", div3, div2, div1);
	 
   return;	
}


