#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   int num1,num2,num3;

   printf("Insira um n�mero:\n");
   scanf("%d",&num1);

   printf("Insira outro n�mero:\n");
   scanf("%d",&num2);

   printf("Insira o �ltimo n�mero:\n");
   scanf("%d", &num3);

     if(num1>num2 &&num3)
     {
         printf("A ordem ser� %d\n %d\n %d\n", num1, num2, num3);


     }






    return 0;
}
