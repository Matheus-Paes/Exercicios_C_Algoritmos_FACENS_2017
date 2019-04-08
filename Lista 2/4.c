#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1, p2, media;

        printf("Insira a nota 1: ");
            scanf("%f", &p1);

        printf("Insira a nota 2: ");
            scanf("%f", &p2);

        media = (p1 + p2) / 2;

        if( media >= 5){
            printf("Aprovado = %.2f", media);
    }
        else{
            printf("Reprovado = %.2f", media);
        }

    return 0;
}
