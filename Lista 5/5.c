#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float salario, mediasalario, filhos, mediafilhos, maiorsalario, s, f;
    float sb = 0;

    for(i = 1; i <= 15; i++){
        printf("Familia %i:\n", i);

        printf("Digite seu salario: ");
            scanf("%f", &salario);

        printf("Quantos filhos ?: ");
            scanf("%f", &filhos);

        s = (s + salario);
        f = (f + filhos);
        if(salario <= 500){
            sb++;

        }
        if(i == 1){
        maiorsalario = salario;

        }else{
            if(salario > maiorsalario){
                maiorsalario = salario;
            }
        }

    }
    mediasalario = (s / 15);
    mediafilhos = (f / 15) ;

    printf("Salario medio = %.2f", mediasalario);
    printf("\nMedia de filhos = %.2f", mediafilhos);
    printf("\nMaior salario = %.2f", maiorsalario);
    printf("\nPorcentagem de pessoas com Salario abaixo de R$500: %.2f", sb);

    return 0;
}
