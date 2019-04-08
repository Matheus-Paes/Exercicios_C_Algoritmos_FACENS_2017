#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;
    imc = peso / (altura * altura);

        printf("Insira seu peso: ");
            scanf("%f", &peso);

        printf("Insira sua altura: ");
            scanf("%f", &altura);

    if(imc < 18.5){
        printf("Abaixo do peso");
    }
    else if (imc >= 18.5 && imc < 25){
        printf("Saudavel");
    }
    else if(imc >= 25 && imc < 30){
        printf("Sobrepeso");
    }
    else if(imc >= 30 && imc <35){
        printf("Obesidade Grau I");
    }
    else if(imc >= 35 && imc < 40){
        printf("Obesidade Grau II(severa)");
    }
    else if(imc >= 40){
        printf("Obesidade Grau III(morbida)");
    }
    return 0;
}
