#include <stdio.h>
#include <stdlib.h>

int main()
{float altura, peso, idade, sexo, ideal;

        printf("Insira sua idade: ");
            scanf("%f", &idade);

        printf("Insira sua altura: ");
            scanf("%f", &altura);

        printf("Insira seu peso: ");
            scanf("%f", &peso);

        printf("Insira seu sexo\n1-masculino\t2-feminino\n ");
            scanf("%f", &sexo);
    if(idade >= 12 && idade <= 17){
        printf("Adolescente");
    }
    if(idade >= 18 && idade <= 25){
        printf("jovem");
    }
    if(idade >= 26 && idade <= 65){
        printf("Adulto");
    }

    if(idade < 12 || idade > 65){
        printf("Operacao invalida. Voce deve ter entre 12 e 65 anos. Reinicie o programa.");
    }
    else{
        if(sexo == 1){
            ideal = (72.7 * altura) - 62;
                printf("\nSeu peso ideal = %.2f", ideal);

    if(peso > ideal){
        printf("\nAcima do Peso\n");
    }
    else if(peso < ideal){
        printf("\nAbaixo do peso\n");
    }
    else{
        printf("\nVoce esta no peso ideal\n");
    }
    }
    if(sexo == 2){
        ideal = (62.1 * altura) - 48.7;
            printf("Seu peso ideal = %.2f", ideal);

    if(peso > ideal){
        printf("\nAcima do peso\n");
    }
    else if(peso == ideal){
        printf("\nPeso ideal\n");
    }
    else {
        printf("\nAbaixo do peso\n");
    }
    }
    }

    return 0;
}
