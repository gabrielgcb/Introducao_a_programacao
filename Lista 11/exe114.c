#include <stdio.h>
#include <math.h>

 int raizes_eq_2grau(float a, float b, float c);
 
 float raiz1, raiz2;
 int main()
{	
	float a, b, c;
	float resultado;
	
	scanf("%f %f %f", &a, &b, &c);
	
	resultado = raizes_eq_2grau(a, b, c);
	
	if(resultado == 0){
		printf("RAIZES IMAGINARIAS\n");
	}
	else if(resultado == 1){
		printf("RAIZ UNICA\nX1 = %.2f\n", raiz1);
	}
	else{
		printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", raiz1, raiz2);
		
	}
  return 0;
}

 int raizes_eq_2grau(float a, float b, float c)
{
	int delta;
	
	delta = pow(b,2)-4*a*c;
	raiz1 = (-b+sqrt(delta))/(2*a);
	raiz2 = (-b-sqrt(delta))/(2*a);	
	
	if(delta < 0){
		return 0;
	}
	
	else if(delta == 0){
		return 1;
	}
	
	else{
		return 2;
	}
}