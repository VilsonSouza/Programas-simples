#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)

{  
    setlocale(LC_ALL, "Portuguese");

     float a,b,c,d,e,f;
        printf("Insira um n�mero:");
        scanf("%f",&a);
        printf("Insira outro n�mero:");
        scanf("%f",&b);
        c=a+b;
        d=a-b;
        e=a*b;
        f=a/b;
        printf(" soma:%.2f\n subtra��o:%.2f\n multiplica��o:%.2f\n divis�o:%.2f\n",c,d,e,f);



}
