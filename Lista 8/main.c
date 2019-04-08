#include <stdio.h>
#include <stdlib.h>

int main()
{
       int v1[5],v2[5],soma=0,i;
    for(i=0;i<5;i++)
    {
        printf("Digite os valores do primeiro vetor: \n");
        scanf("%i",&v1[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nDigite os valores do segundo vetor: ");
        scanf("%i",&v2[i]);
    }
    for(i=0;i<5;i++)
    {
        soma = soma+(v1[i]*v2[i]);
    }
    printf("Valor: %i", soma);


return 0;
}

