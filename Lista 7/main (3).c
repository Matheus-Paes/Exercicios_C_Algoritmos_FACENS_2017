#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8], posicao, i;

    for(i=0; i<8; i++){
        printf("Informe o valor %i: ", i);
            scanf("%i", &vetor[i]);
        }

        do{

        printf("\nInforme qual valor deseja exibir: ");
            scanf("%i", &posicao);

        }while(posicao < 0 || posicao > 7);

        printf("Valor da posicao %i = %i", posicao, vetor[posicao]);

    return 0;
}
