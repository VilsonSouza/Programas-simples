#include <stdio.h>
#include <stdlib.h>

int main()
{
  char indic;
  float km,mil;

  printf("Insira k para quilometros e m para milhas");
  scanf("%c",&indic);

  if(indic=='k')
  {
      printf("Insira as milhas\n");
      scanf("%f",&mil);
      mil=1.61*mil;
      printf("%.2f",mil);
  }
    else if(indic=='m')
    {
         printf("Insira os quilometros\n");
         scanf("%f",&km);
         km=km/1.61;
         printf("%.2f",km);
    }





}
