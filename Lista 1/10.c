#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXERCICIO 10

    //NOTA: Distancia em Km e Gasto em L(litro)

    // VARIAVEIS
    float distancia, gasto, consumo;

    //ENTRADA DE DADOS
    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);

    printf("Digite o gasto: ");
    scanf("%f", &gasto);

    //PROCESSAMENTO
    consumo = distancia / gasto;

    //RESULTADO
    printf("seu consumo medio de combustivel = %.2f", consumo);
    return 0;
}
