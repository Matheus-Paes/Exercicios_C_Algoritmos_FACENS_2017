#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EXERCICIO 12

    // VARIAVEIS
    float normal, extra, salario;

    //ENTRADA DE DADOS
    printf("Digite a quatia de horas normais: ");
    scanf("%f", &normal);

    printf("Digitia a quantia de hora extra: ");
    scanf("%f", &extra);

    //PROCESSAMENTO
    salario = (normal * 10) + (extra * 15);

    //RESULTADO
    printf("Salario = %.2f", salario);

        return 0;
}
