#include <stdio.h>

  int main() 
{
	int matricula;
	
	do{
		float horasTrabalhadas=0, valorHoras=0, salario=0;
		
		scanf("%d %f %f", &matricula, &horasTrabalhadas, &valorHoras);
		getchar();
		if(matricula!=0){
			salario = horasTrabalhadas*valorHoras;
			printf("%d %.2f\n", matricula, salario);
		}
		else{
		}
	} while(matricula!=0);
  return 0;
}