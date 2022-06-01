#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vit1,vit2,sald1,sald2,gol1,gol2,ver1,ver2,ama1, ama2 ,tim1,tim2;

    printf("Insira o numero de pontos do time 1:\n");
    scanf("%d", &tim1);

    printf("Insira o numero de pontos do time 2:\n");
    scanf("%d", & tim2);

    if(tim1!= tim2)
    {
        printf("Nao tem empate!!!");
    }
    else{
         printf("-----------------------------------------\n");

        printf("Insira o numero de vitorias do time 1:\n");
        scanf("%d", & vit1);

        printf("Insira o numero de vitorias do time 2:\n");
        scanf("%d", &vit2);

        printf("insira o saldo de gols do time 1:\n");
        scanf("%d", & sald1);

        printf("Insira o saldo de gols do time 2:\n");
        scanf("%d", & sald2);

        printf("Insira o numero de gols do time 1:\n");
        scanf("%d", & gol1);

        printf("Insira o numero de gols do time 2:\n");
        scanf("%d", & gol2);

        printf("Insira o numero de cartoes vermelhos do time 1 :\n");
        scanf("%d", & ver1);

        printf("Insira o numero de cartoes vermelhos do time 2:\n");
        scanf("%d", &ver2);

        printf("Insira  o numero de cartoes amarelos do time 1: \n");
        scanf("%d",&ama1);

        printf("Insira  o numero de cartoes amarelos do time 2: \n");
        scanf("%d",& ama2);

        printf("---------------------------------------------------\n");

        if(vit1>vit2)

        printf("Time 1 ganha do time2");

        else if(vit2>vit1)

        printf("Time 2 ganha do time1");

        else if(sald1>sald2)

        printf("O time 1 ganha do time 2");

        else if(sald2>sald1)

        printf("O time 2 ganha do time 1");

        else if(gol1>gol2)
        printf("O time 1 ganha do time 2");

        else if(gol2>gol1)

        printf("O time 2 ganha do time 1");

        else if(ver1>ver2)

        printf("O time 1 ganha do time 2");

        else if(ver2>ver1)

        printf("O time 2 ganha do time1");

        else if(ama1>ama2)

        printf("O time 1 ganha do time 2");

        else if(ama2>ama1)

        printf("O time 2 ganha do time 1");



    }

    return 0;
}
