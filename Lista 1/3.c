#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXERCICIO 3

    //VARIAVEIS
    float m, cm ;

    //ENTRADA DE DADOS
    printf("Digite o tamanho em metros: ");
    scanf("%f", &m);

    //PROCESSAMENTO
    cm = m * 100;

    //RESULTADO
    printf("Valor em centimetros: %f", cm);
    return 0;
}
