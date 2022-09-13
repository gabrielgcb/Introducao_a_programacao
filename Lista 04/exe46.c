#include <stdio.h>

  int main() 
{
	int i, matricula;
	
	do{
		float notasProvas[8], somaProvas=0, mediaProvas=0; 
		float notasListas[5], somaListas=0, mediaListas=0; 
		float notaTrabalho=0;
		float presenca=0;
		float notaFinal=0;
		
		scanf("%d", &matricula);	
		
			for(i=0; i<8; i++){
			scanf("%f", &notasProvas[i]);
			somaProvas += notasProvas[i];
			}
			mediaProvas = somaProvas/8;
			
			for(i=0; i<5; i++){
				scanf("%f", &notasListas[i]);
				somaListas += notasListas[i];
			}
			mediaListas = somaListas/5;
			
			scanf("%f", &notaTrabalho);
			scanf("%f", &presenca);
					
			notaFinal = 0.7*mediaProvas + 0.15*mediaListas + 0.15*notaTrabalho;
			
			if(matricula!=-1){

				if(notaFinal >= 6.0 && presenca >= 96){
			   		printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", matricula, notaFinal);
			    }
			   
			    if(presenca >= 96 && notaFinal < 6.0){
			   		printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", matricula, notaFinal);
			    }
			   
			    if(notaFinal >= 6.0 && presenca < 96){
			   		printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, notaFinal);
			    }
			   
			    if(notaFinal < 6.0 && presenca < 96){
			   		printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, notaFinal);
			    }
			}
			
			else{
			}
	} while(matricula!=-1);
  return 0;
}