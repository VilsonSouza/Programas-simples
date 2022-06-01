#include <stdio.h>
#include <stdlib.h>


int main()
{

   int p1,p2,p3,p4;
   char ex;


     printf("-----------------------------------\n");

     printf("Menu\n");

     printf("Escolha um prato ou digite s para sair:\n");
     scanf("%d", &p1);

     switch(p1){
     case 1:
         printf("Prato 1- escolhido\n");
         break;
     case 2:
         printf("Prato 2- escolhido\n");
         break;

     case 3:
         printf("Prato 3- escolhido\n");
         break;
     case 4:
         printf("Prato 4- escolhido\n");
         break;

     default:
         printf("saida:\n");
         scanf("%c", &ex);
     }

     printf("-----------------------------------\n");

      if(ex=='s')
        printf("voce saiu!!!");
    else
      {
         if(p1>=1)
            printf("O prato escolhido foi o primeiro");
         else if(p2>=1)
            printf("O prato escolhido foi o segundo");
         else if(p3>=1)
            printf("O prato escolhido foi o terceiro");
         else if(p4>=1)
            printf("O prato escolhido foi o quarto");}

}













