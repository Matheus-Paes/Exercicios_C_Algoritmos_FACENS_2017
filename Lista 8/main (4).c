#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mega[6],aposta[10], i, j, acerto=0;
    for(i=0;i<6;i++)
    {
        printf("Digite os numeros da Mega: ");
        scanf("%i", &mega[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Digite os numeros da aposta: ");
        scanf("%i", &aposta[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<6;j++)
        {
            if(aposta[i]==mega[j])
            {
                acerto++;
            }
        }
    }
    printf("Acertos: %i", acerto);
    if(acerto==6)
    {
        printf("\n\tSena");
    }
    else
    {
        if(acerto==5)
        {
            printf("\n\tQuina");
        }
        else
        {
        if(acerto==4)
            {
                printf("\n\tQuadra");
            }
        }

    return 0;
}
}
