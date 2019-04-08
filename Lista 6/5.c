#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operacao=0;
    float n1, n2, res;

        printf("\tCALCULADORA\n");

    while(operacao < 4){
            printf("Digite a operacao desejada:\n\t1-Soma\n\t2-Subtracao\n\t3-Multiplicacao\n\t4-Divisao\n\t5-Sair\n");
                scanf("%i", &operacao);

        printf("Insira o primeiro valor: ");
            scanf("%f", &n1);

        printf("Insira o segundo valor: ");
            scanf("%f", &n2);

        if(operacao == 1){
            res = n1 + n2;
            printf("Resultado = %.2f\n", res);
        }

        if(operacao == 2){
            res = n1 - n2;
            printf("Resultado = %.2f\n", res);
        }

        if(operacao == 3){
            res = n1 * n2;
            printf("Resultado = %.2f\n", res);
        }

        if(operacao == 4){
            res = n1 / n2;
            printf("Resultado = %.2f\n", res);
        }
    }
    return 0;
}
