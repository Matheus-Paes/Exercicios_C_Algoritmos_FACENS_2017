#include <stdio.h>
#include <stdlib.h>

int main()
{
    float plano, minutos, mais,  acrescimo, vfinal;
    plano = 50;

        printf("Insira seus minutos usados: ");
            scanf("%f", &minutos);

    if(minutos <= 50){
        printf("Sua tarifa mensal = %.2f", plano);
    }
    else if(minutos > 50){
        mais = minutos - plano;
        acrescimo = mais * 1.50;
        vfinal = acrescimo + plano;

        printf("Sua tarifa mensal = %.2f", vfinal);
    }
    return 0;
}
