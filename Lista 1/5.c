#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEIS
    int n1, n2, res, resto;

    //ESTRADA DE DADOS
    printf("Digite n1: ");
    scanf("%i", &n1);

    printf("Digite n2: ");
    scanf("%i", &n2);

    //PROCESSAMENTO
    res = n1 / n2;
    resto = n1 % n2;

    //RESULTADO
    printf("resultado =  %i\n", res);
    printf("resto = %i", resto);


    return 0;
}
