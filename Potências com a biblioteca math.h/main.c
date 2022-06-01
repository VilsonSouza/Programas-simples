#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");


    int numb, raiz, divisao,potencia, conta;

    printf("Insira o número:\n");
    scanf("%d", &numb);

    potencia = pow(numb,2);
    raiz= sqrt(numb);
    divisao= numb/2;
    conta= sqrt(numb)+(numb/2)+pow(numb,2);

    printf("A raiz será:%d\n",raiz);

    printf("A potência será:%d\n",potencia);

    printf("A divisão será:%d\n",divisao);

    printf("O resultado da fórmula será:%d",conta);



    return 0;
}
