#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, a=0, b=0, c=0, d=0, e=0;

        printf("\tELEICAO\n");

    do{
        printf("\n\tCanditados:\n\t1-JOSE\n\t2-MARIA\n\t3-JOAO\n\t4-BRANCO\n\t5-NULO\n");
            scanf("%i", &voto);

    if(voto == 1){
        a++;
    }

    if(voto == 2){
        b++;
    }

    if(voto == 3){
        c++;
    }

    if(voto == 4){
        d++;
    }

    if(voto == 5){
        e++;
    }

    }while(voto > 0);

        printf("JOSE = %i votos", a);
        printf("\nMARIA = %i votos", b);
        printf("\nJOAO = %i votos", c);
        printf("\nBRANCOS = %i votos", d);
        printf("\nNULOS = %i votos", e);

        if(a > b && a > c && a > d && a > e){
            printf("\nVencedor: JOSE");
        }

        if(b > a && b > c && b > d && b > e){
            printf("\nVencedor: MARIA");
        }

        if(c > a && c > b && c > d && c > e){
            printf("\nVencedor: JOAO");
        }

        if(d > a && d > b && d > c && d > e){
            printf("\nBRANCO: Nenhum dos canditados obtiveram votos suficiente.");
        }
        if(e > a && e > b && e > c && e > d){
            printf("\nNULO: Nenhum dos canditados obtiveram votos suficiente.");
        }
    return 0;
}
