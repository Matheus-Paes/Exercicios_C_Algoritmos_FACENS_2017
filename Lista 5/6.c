#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sexo;
    float menor, menor2, mediaM, numH = 0, numF = 0, maior, altura, alturaf = 0;

    for(i = 1; i <= 3; i++){
        printf("Digite seu sexo: ");
        printf("1-Masculino\t2-Feminino\n");
            scanf("%i", &sexo);

    if(sexo == 1){
        printf("Digite sua altura: ");
            scanf("%f", &altura);
        menor = altura;
        numH++;
    }
    else if(sexo == 2)    {
        printf("Digite sua altura: ");
            scanf("%f", &altura);
        menor = altura;
        numF++;
        alturaf = alturaf + altura;
    }

    }
        mediaM = (alturaf / numF);
        printf("Menor altura do grupo: %.2f", menor);
        printf("\nMedia da altura das mulheres = %.2f", mediaM);
        printf("\nNumero de homens = %.2f", numH);
        printf("\nSexo da pessoa mais alta = %.2f", maior);

    return 0;
}
