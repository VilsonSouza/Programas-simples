#include <stdio.h>
#include <stdlib.h>

int main()
{
   char indic;
   int n;
   float op;
   printf("Insira f para farheinheint e c para celsius");
   scanf("%c",&indic);

   if(indic=='f'){
     printf("Insira o grau em celsius:");
     scanf("%d",&n);
     op=(n*9/5)+32;
     printf("O resultado vai ser:%.2f",op);
     }
    else if(indic=='c'){
         printf("Insira o grau em farheinheint:");
         scanf("%d",&n);
         op=5*(n-32)/9;
         printf("O resultado vai ser: %.2f",op);
         }

     }




