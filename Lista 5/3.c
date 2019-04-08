#include <stdio.h>
#include <stdlib.h>

int main(){
    int conta, contador;
    int positivo = 0;
    int negativo = 0;
    float num, media, a;

        printf("Insira a quantidade de dados que voce deseja informar: ");
            scanf("%i", &conta);

        for(contador = 1; contador <= conta; contador++){
            printf("Insira o valor %i: ", contador);
                scanf("%f", &num);

    if(num > 0){
        a = a + num;
    }
    if(num > 0){
        positivo++;
    }

    if(num < 0){
        negativo++;
    }
}
        media = (a / positivo);
        printf("Media = %.2f", media);


    return 0;
}
