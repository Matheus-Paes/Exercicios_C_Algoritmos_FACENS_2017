#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, res, resto;

        printf("Insira o ano: ");
            scanf("%i", &ano);

    res = ano / 4;
    resto = ano % 4;

    if(resto = 0){
        printf("Ano bissexto");
    }
    else{
        printf("Ano nao-bissexto");
    }
    return 0;
}
