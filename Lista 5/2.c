#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, conta;
    int positivo = 0;
    int negativo = 0;

    for(conta = 1; conta <= 10; conta++){
        printf("Insira o valor %i: ", conta);
            scanf("%i", &num);

    if(num > 0){
        positivo++;
    }
    if(num < 0 ){
        negativo++;
    }
}
        printf("Negativos = %i\n", negativo);
        printf("Positivos = %i", positivo);

    return 0;
}
