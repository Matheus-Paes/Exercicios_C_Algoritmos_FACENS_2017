#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float num, media, maior=0, a=0, b=0;

    do{
        printf("Digite um numero: ");
            scanf("%f", &num);
        a = a+num;
        if(num > maior){
            maior = num;
        }
        printf("Deseja continuar? \n 1-Sim\t2-Nao\n");
            scanf("%i", &i);
        if(i == 1 || i == 2){
            b++;
        }
    }while(i == 1);
    media = a/b;

    printf("Media = %.2f", media);
    printf("\nMaior = %.2f", maior);

    return 0;
}
