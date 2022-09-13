#include <stdio.h>

int main (){
    int i, j, ci, cj, menor, maior; 
    float fmenor, fmaior;
    fmenor, fmaior = 1;

    scanf ("%d %d", &i, &j);

    int matriz[i][j];

    //preenche a matriz
    for(ci=0;ci<i;ci++){
        for(cj=0;cj<j;cj++){
            scanf("%d",&matriz[ci][cj]);
        }
    } 
    //inicializa maior e menor
    maior = matriz[0][0];
    menor = matriz[0][0];

    //procura pelo menor e calcula frequencia
    for(ci=0;ci<i;ci++){
        for(cj=0;cj<j;cj++){
            if (matriz[ci][cj]<menor){
                fmenor=1;
                menor=matriz[ci][cj];
            }
            else if (matriz[ci][cj]==menor){
                fmenor++;
            }
        }
    } 

    //procura pelo maior e calcula frequencia
    for(ci=0;ci<i;ci++){
        for(cj=0;cj<j;cj++){
            if (matriz[ci][cj]>maior){
                fmaior=1;
                maior=matriz[ci][cj];
            }
            else if (matriz[ci][cj]==maior){
                fmaior++;
            }
        }
    }

    fmenor = (fmenor/(i*j))*100;
    fmaior = (fmaior/(i*j))*100;

    printf("%d %.2f%%\n", menor, fmenor);
    printf("%d %.2f%%\n", maior, fmaior);

    return 0;
}