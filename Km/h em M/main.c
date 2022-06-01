#include <stdio.h>
#include <stdlib.h>

int main()
{
    char indic;
    float km,ms;

    printf("Insira K para kilometros por hora e M para metros por segundo\n");
    scanf("%c",&indic);

    if(indic=='k')
       {printf("Insira os metros por segundo");
        scanf("%f",&ms);
        ms=ms*3.6;
        printf("%.2f",ms);}


    else if(indic=='m')
       {
         printf("Insira os quilometros por hora\n");
         scanf("%f",&km);
         km=km/3.6;
         printf("%.2f",km);

       }
}
