#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)

{  
    setlocale(LC_ALL, "Portuguese");

     float a,b,c,d,e,f;
        printf("Insira um número:");
        scanf("%f",&a);
        printf("Insira outro número:");
        scanf("%f",&b);
        c=a+b;
        d=a-b;
        e=a*b;
        f=a/b;
        printf(" soma:%.2f\n subtração:%.2f\n multiplicação:%.2f\n divisão:%.2f\n",c,d,e,f);



}
