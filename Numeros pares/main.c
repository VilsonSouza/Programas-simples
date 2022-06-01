#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cont,op;

    printf("Insira a quantidade de numeros pares");
    scanf("%d",n);


    for(cont=1;cont<=n;cont++)
    {
       op=cont%2;
       printf("%d",op);

    }
}
