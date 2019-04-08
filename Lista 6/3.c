#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    float nota1, nota2, media;

    do{
        printf("Insira a nota 1: ");
        scanf("%f", &nota1);
    }while(nota1 < 0 || nota1 > 10);

    do{
        printf("Insira a nota 2: ");
        scanf("%f", &nota2);

    }while(nota2 < 0 || nota2 > 10);
    media = (nota1 + nota2) / 2;

        printf("Media = %.2f", media);
    return 0;
}
