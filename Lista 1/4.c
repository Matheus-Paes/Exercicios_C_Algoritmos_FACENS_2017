#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variaveis
    int born, dias;

    //entrada de dados
    printf("Digite seu ano de nascimento: ");
    scanf("%i", &born);

    //processamento

    dias = ( 2017 - born ) * 365;
    printf ("voce tem = %i", dias);


    return 0;
}
