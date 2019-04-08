#include <stdio.h>
#include <stdlib.h>

int main()
{
    // VARIAVEIS
    float temp, celsius;

    //ENTRADA DE DADOS
    printf("Digite a temperatura em F: ");
    scanf("%f", &temp);

    //PROCESSAMENTO
    celsius = (temp - 32) / 1.8;

    //RESULTADO
    printf("Temperatura em Celsius  = %f", celsius);

    return 0;
}
