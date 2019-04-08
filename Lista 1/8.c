#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEIS
    float r, p;

    //ENTRADA DE DADOS
    printf("Digite o Raio: ");
    scanf("%f", &r);

    //PROCESSAMENTO
    p = 2 * 3.14 * r;

    //RESULRTADO
    printf ("Perimetro = %f", p);
    return 0;
}
