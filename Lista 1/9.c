#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //EXERCICIO 9

    //VARIAVEIS
    float num, res1, res2;

    //ENTRADA DE DADOS
    printf("Digite um numero: ");
    scanf("%f", &num);

    //PROCESSAMENTO
    res1 = pow(num,8);
    res2 = sqrt(num);

    // RESULTADO
    printf("Resulado: %.2f\n", res1);
    printf("raiz quadrada: %.2f", res2);

    return 0;
}
