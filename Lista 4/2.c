#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, tabuada;
    int conta;

        printf("Insira um numero: ");
            scanf("%f", &n1);

    for (conta = 1; conta < 11 ; conta++){
    tabuada = n1 * conta;
            printf("\n%.2f x %i = %.2f\n", n1, conta, tabuada);
    }
    return 0;
}
