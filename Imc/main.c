#include <stdio.h>
#include <stdlib.h>

int main()
{

    float peso,altura, imc;

    printf("Insira o peso\n");
    scanf("%f",&peso);

    printf("Insira a altura\n");
    scanf("%f",&altura);

    imc=peso/(altura*altura);

    if(imc<18.5)
        printf("Abaixo do peso");
     else if(imc>=18.5 &&imc<=24.9)
        printf("Normal\n");
     else if(imc>=25.0 &&imc<=29.9)
        printf("SObrepeso");
     else if(imc>30.0&& imc<30.0)
        printf("Obesidade");
     else if(imc>40.0)
        printf("Obesidade grave");
    printf("%.2f",imc);
}
