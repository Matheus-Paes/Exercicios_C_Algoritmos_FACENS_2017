#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salario, reajuste, r5, r7, novosalario;
    r5 = 0.05;
    r7 = 0.07;

        printf("Insira o seu salario atual: ");
            scanf("%f", &salario);

    if( salario <= 1000 ){
        reajuste = salario * r5;
        novosalario = reajuste + salario;

            printf("Seu novo salario = %.2f", novosalario);
    }
    else if( salario >= 1000 ){
        reajuste = salario * r7;
        novosalario = reajuste + salario;

            printf("Seu novo salario = %.2f", novosalario);
    }
    return 0;
}
