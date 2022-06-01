#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numfinal,i;

    printf("Digite o fim da sequencia:\n");
    scanf("%d",&numfinal);

    for(i=1;i<=numfinal;i++)
        printf("%d\t",i);
}
