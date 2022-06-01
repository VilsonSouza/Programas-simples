
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , ord, ant, i;

    printf("Digite uma quantidade de numeros:\n");
    scanf("%d", &n);

    printf("Escreva o primeiro numero da ordem:");
    scanf("%d", &ord);



    for(;n>1;n--) // comecei em 1 pq já atribui o primeiro da ordem
    {
         ant=ord;

         if(ord<ant)
            i=0;

            printf("Digite um numero da ordem:\n");
            scanf("%d", &ord);

    }

        if(i==0)
            printf("A ordem e nao crescente");
        else
            printf("A ordem e crescente ");

}
