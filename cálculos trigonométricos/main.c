#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    float dim, lado,dim1, dim2, raio;


    printf("Inisira q para quadrado, r para retêngulo e c para círculo:\n");
    scanf("%c", & a);

    if(a == 'q'){
     printf("A figura escolhida foi o quadrado\n");

     printf("Insira o tamanho de um lado:\n");
     scanf("%f", &dim);

        lado = dim*dim;

            printf("O resultado foi:%f", lado);
    }

    else {
        if(a == 'r'){
            printf("A figura escolhida foi o retangulo\n");

            printf("Insira o tamanho dos lados:\n");
            scanf("%f", &dim1);
            scanf("%f", &dim2);

            lado= dim1*dim2;

            printf("O resultado sera:%f", lado); }


        else{
            if(a == 'c'){
                printf("A figura escolhida foi o circulo\n");

                printf("Insira o raio:\n");
                scanf("%f", &dim);

                raio=dim*dim*3,14;

                printf("O resultado foi:%.2f",raio);}

            else
                    printf("Erro!!!");
        }






    }


    return 0;
}
