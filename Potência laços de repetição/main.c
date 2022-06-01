#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a;

    printf("Insira a quantidade de numeros:\n");
    scanf("%d",&n);


    for(a=1;a<=n;a++)
        printf("%d\n",a*2);
}
