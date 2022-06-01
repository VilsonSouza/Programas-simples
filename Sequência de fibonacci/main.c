#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,ant,at,cont,prox;

   printf("Insira a quantidade de numeros\n");
   scanf("%d",&n);

   ant=1;
   at=1;
   for(cont=1;cont<=n;cont++){
       prox=ant+at;
       printf("%d\n",ant);
       ant=at;
       at=prox;

   }
}

