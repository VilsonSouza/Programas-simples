#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Insira um numero:\n");
    scanf("%d",&number);

    if(number>10)
    {
        printf("SIM");

    }
    else
    {
        number=number%2;

        if(number !=0)
        {
            printf("SIM");

        }
        else
        {
            printf("NAO");
        }
    }

    return 0;
}
