#include <stdio.h>
#include <stdlib.h>

int main()
{
    // VARIAVEIS
    float base, altura, area;

    //ENTRADA DE DADOS
    printf("Digite o valor da base: ");
    scanf("%f",&base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    // PROCESSAMENTO
    area = (base * altura) / 2;

    //RESULTADO
    printf("Area do triangulo = %f ", area);
    return 0;
}
