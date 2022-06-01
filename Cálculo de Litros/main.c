#include <stdio.h>
#include <stdlib.h>

int main()
{
    float din, lit, pre;

    printf("Insira quantos reais voce deseja abastecer");
    scanf("%f",&din);

    printf("Insira o preco do combustivel");
    scanf("%f",&pre);

    lit=din/pre;

    printf("A quantidade de litros sera %.2f",lit);
}
