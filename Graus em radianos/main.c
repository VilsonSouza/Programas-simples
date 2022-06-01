#include <stdio.h>
#include <stdlib.h>

int main()
{
    char indic;
    float grau,rad;

    printf("Insira g para graus e r para radianos:\n");
    scanf("%c",&indic);

    if(indic=='g')
    {
        printf("Insira os radianos:\n");
        scanf("%f",&rad);
        rad=rad*180/3.14;

        printf("%.2f",rad);
    }
    else if(indic=='r')
    {
        printf("Insira os graus:\n");
        scanf("%f",&grau);
        grau=grau*3.14/180;
        printf("%.2f",grau);
    }

}
