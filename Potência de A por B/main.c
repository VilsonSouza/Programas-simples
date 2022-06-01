#include <stdio.h>
#include <stdlib.h>


int main()
{
   int a, b,cont,pow,prox;

   printf("Insira a base:\n");
   scanf("%d",&a);

   printf("Insira o expoente:\n");
   scanf("%d",&b);

    for(cont=1;cont<=b;cont++)
        {pow=a*a;
         prox=pow*a;
         pow=prox;}

         printf("%d",pow);


}
