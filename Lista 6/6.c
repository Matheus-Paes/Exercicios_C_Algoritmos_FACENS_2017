#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operacao=0;
    float saldo, deposito, retirada;

        printf("Insira seu saldo inicial: ");
            scanf("%f", &saldo);
    while(operacao < 3){
        printf("Digite a operacao desejada:\n\t1-DEPOSITO\n\t2-RETIRADA\n\t3-SAIR\n");
            scanf("%i", &operacao);
    if(operacao == 1){
        printf("Digite o valor do deposito: ");
            scanf("%f", &deposito);
        saldo = saldo + deposito;
    }
    if(operacao == 2){
        printf("Digite o valor da retirada: ");
            scanf("%f", &retirada);
        saldo = saldo - retirada;
    }

    }


    if(saldo == 0){
        printf("Saldo = %.2f", saldo);
        printf("\nCONTA ZERADA");
    }

    if(saldo > 0){
        printf("Saldo = %.2f", saldo);
        printf("\nCONTA PREFERNCIAL");
    }

    if(saldo < 0){
        printf("Saldo = %.2f", saldo);
        printf("\nCONTA ESTOURADA");

    }
    return 0;
}
