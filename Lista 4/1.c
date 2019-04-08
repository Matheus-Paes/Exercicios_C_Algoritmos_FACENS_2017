#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, dobro;
    int conta;

    for (conta = 1; conta < 11; conta++){

        printf("Insira o valor %i: \n", conta);
            scanf("%f", &n1);
        dobro = n1 * 2;
        printf("Dobro = %.2f\n", dobro);

    }
    return 0;
}
