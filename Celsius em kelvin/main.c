#include <stdio.h>
#include <stdlib.h>

int main()
{
   char indic;
   float op,n;

   printf("Digite c para celsius e k para kelvin");
   scanf("%c",&indic);

   if(indic=='c'){
     printf("Insira o graus em kelvin");
     scanf("%f",&n);
     op=n-273,15;
     printf("O grau em celsius vai ser: %.2f",op);
    }
    else if(indic=='k'){
     printf("Insira o grau em celsius");
     scanf("%f",&n);
     op=n+273,15;
     printf("O grau em kelvin vai ser: %.2f",op);
    }


}
