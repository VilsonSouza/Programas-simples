#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Cod_v;
    float Val_venda;
    double Comi,Ganho;

    printf("Digite o codigo do vendedor:\n");
    scanf("%d", &Cod_v);

    printf("Digite o valor da venda:\n");
    scanf("%f",&Val_venda);

    printf("Insira a comissao do vendedor: ");
    scanf("%lf",&Comi);

    Ganho = (Val_venda*Comi) /100;

    printf("O vendedor:%d recebera %lf",Cod_v,Ganho);


    return 0;
}
