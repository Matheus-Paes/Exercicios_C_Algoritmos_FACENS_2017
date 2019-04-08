#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, n1;

        printf("Digite o primeiro numero: ");
        scanf("%f", &x);

        printf("Digite o segundo numero: ");
        scanf("%f", &y);

        printf("Digite um numero: ");
        scanf("%f", &n1);

    if(n1 > x && n1 < y){
        printf("dentro do intervalo");
    }
    if(n1 < x || n1 > y){
        printf("fora do intervalo");
    }
    else if(n1 == x || n1 == y){
        printf("O numero esta em uma das extremidades");
    }
    return 0;
}
