#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");


    int numb, raiz, divisao,potencia, conta;

    printf("Insira o n�mero:\n");
    scanf("%d", &numb);

    potencia = pow(numb,2);
    raiz= sqrt(numb);
    divisao= numb/2;
    conta= sqrt(numb)+(numb/2)+pow(numb,2);

    printf("A raiz ser�:%d\n",raiz);

    printf("A pot�ncia ser�:%d\n",potencia);

    printf("A divis�o ser�:%d\n",divisao);

    printf("O resultado da f�rmula ser�:%d",conta);



    return 0;
}
