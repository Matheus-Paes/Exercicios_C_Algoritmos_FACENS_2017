#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, soma, sub, div, multi, op, resultado;

        printf("Insira um numero: ");
            scanf("%f", &n1);

        printf("Insira um numero: ");
            scanf("%f", &n2);

        printf("Selecione uma operacao: \n1-soma\t2-subtracao\n3-multiplicacao\t4-divisao\n");
            scanf("%f", &op);
    if(op > 4){
        printf("Operacao invalida");
    }
    if(op == 1){
        resultado = n1 + n2;
            printf("Resultado = %.2f", resultado);
    }
    if(op == 2){
        resultado = n1 - n2;
            printf("Resultado = %.2f", resultado);
    }
    if(op == 3){
        resultado = n1 * n2;
            printf("Resultado = %.2f", resultado);
    }
    if(op == 4){
        resultado = n1 / n2;
            printf("Resultado = %.2f", resultado);
    }
    return 0;
}
