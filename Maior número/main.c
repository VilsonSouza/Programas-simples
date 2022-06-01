#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Insira dois numeros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1>num2)
       printf("o maior numero eh: %d",num1);
    else
        printf("O maior numero eh: %d",num2);

}
