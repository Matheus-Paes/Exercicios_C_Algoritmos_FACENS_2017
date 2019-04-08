#include <stdio.h>
#include <stdlib.h>

int main()
{
    // EXERCICIO 2

    //VARIAVEIS
    float n1, n2, resultado;

    //ENTRADA DE DADOS
    printf("Digite n1: ");
    scanf("%f", &n1);

    printf("Digite n2: ");
    scanf("%f", &n2);

    //PROCESSAMENTO
    resultado = (n1 + n2) / 2;

    //RESULTADO
    printf("Media = %f", resultado);

    return 0;
}
