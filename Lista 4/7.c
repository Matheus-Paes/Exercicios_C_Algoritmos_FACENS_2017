#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mt, mp, media;
    int conta;

    for(conta = 1; conta < 31; conta++){
        printf("\nAluno %i\nMedia teorica: ", conta);
            scanf("%f", &mt);
        printf("Media pratica: ", conta);
            scanf("%f", &mp);

        media = (mt * 0.6 + mp * 0.4);
        printf("Media = %.2f", media);

    if(media >= 7){
        printf("\tBom\n");
    }
    else if(5 <= media && media < 7){
        printf("\tRegular\n");
    }
    else if(media < 5){
        printf("\tRuim\n");
    }

    }
    return 0;
}
