#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    int conta;

    for (conta = 1; conta < 11; conta++){
        printf("Insira o valor %i: ", conta);
            scanf("%f", &n);
    if(n == 0){
        printf("Nulo\n");
    }
    else if(n > 0){
        printf("Positivo\n");
    }
    else if (n < 0 ){
        printf("Negativo\n");
    }
    }

    return 0;
}
