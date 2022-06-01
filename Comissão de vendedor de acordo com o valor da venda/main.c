#include <stdio.h>
#include <stdlib.h>

int main()
{

    float val,comi;

    printf("--------------------------------------------\n");

    printf("Insira o valor da venda:\n");
    scanf("%f", &val);

     if(val<= 2500 )
    comi= (val*1.7/100)+30;

     else if(val>2500.01 && val<6250 )
            comi=(val*0.66/100)+56;

     else if(val>6250.01 && val<20000)
           comi=(val*0.34/100)+76;
     else if(val>20000.01 && val<50000.00)
            comi=(val*0.22/100)+100;
     else if(val>50000.01 && val<500000.00)
            comi=(val*0.11/100)+155;
     else if(val>500000.00)
            comi=(val*0.09/100)+255;

     if(comi<39)
        comi=39.00;

     printf("A comissao do vendedor vai ser %.2f",comi);













    return 0;
}
