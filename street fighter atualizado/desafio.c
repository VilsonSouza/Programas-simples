#include <stdio.h>
/* Esse programa tem como finalidade simular um jogo de luta, ao estilo Street Fighter.
     * Contudo, os "personagens" não possuem vidas para serem zeradas. Ganha quem dar os golpes mais fortes.
     * Ao decorrer do programa, o usuário deve inserir primeiro a sequencia de golpes do lado positivo; depois, do lado negativo.
     * Existem golpes "especiais", constituídos por números perfeitos (onde a soma de seus próprios divisores é igual ao próprio número);
     * e números triangulares (que graficamente formam um triangulo).
     */

    //Feito pelos alunos do curso de ADS - 1 Ciclo; FATEC Campinas:
    //Nicolas Seroiska
    //Vilson Souza

int main()
{
    int dano, acu_ken = 0, acu_ryu = 0, div = 0, acum_triang = 0, vez_ryu = 1, vez_ken = 0, round = 0,negativo=0;

    printf("Insira o dano dado");//inserindo o primeiro  dano para entrar no laço do while//
    scanf("%d", &dano);
    while (dano != 0)//inicio do loop. enquanto for diferente de zero ele continua//
    {
        acum_triang = 0;//inicializei as variáveis em zero sempre que o passo começar//
        div = 0;
        negativo=0;
        if(dano<0){ //se o dano for negativo fazemos o módulo dele. para testar se é perfeito ou triangular//
            negativo=1;
            dano=dano*-1;
        }
        for (int i = 1; i < dano; i++)//início do loop//
        {
                
            if (dano % i == 0)//teste dos divisores//
            {
                div = div + i;
            }

            if (div == dano)// se o a soma dos dvisores for igual ao numero ele é perfeito e multiplica por 3//
            {
                dano = dano * 3;
            }
        }//fim do loop//
        for (int i = 1; i < dano; i++)//início do loop//
        {
            acum_triang = acum_triang + i;//somamo a acumuladora do número triangular com i. para formarmos o triângulo//
            if (acum_triang == dano)// se o dano for igual a um número triangular ele é multiplicado por 2//
            {
                dano = dano * 2;
            }
        }

        if (negativo==0)// se o negativo for  falso os pontos vão para o ryu//
        {
            acu_ryu = acu_ryu + dano;
        }
        else// se não eles vão para o ken//
        {
            vez_ryu = 0;
            vez_ken = 1;//atribuindo a vez para o ken//
            acu_ken = acu_ken +dano;
        }

        printf("Insira o dano dado"); // repetição da inserção de dados//
        scanf("%d", &dano);

        if (vez_ryu == 0 && vez_ken == 1 && (dano > 0 || dano == 0)) //se não for a vez do ryu e o dano inserido tenha sido positivo ou 0 entramos nesse bloco//
        {
            vez_ryu = 1;//atribuindo a vez ao ryu//
            vez_ken = 0;

            if (acu_ryu > acu_ken)//se o ryu fizer mais pontos que o ken ele ganha um ponto no round//
            {
                round = round + 1;//adicionamos 1 na "luta"//
                
            }
            else if (acu_ryu < acu_ken)//se o ken fizer mais pontos o ponto sera dado a ele//
            {
                round = round - 1;
                
            }
            acu_ryu = 0;// zeramos os acumuladores para começar um novo round//
            acu_ken = 0;
        }
    }

    if (round > 0)// se os pontos forem maiores que zero ryu ganha//
    {
        printf("Ryu ganhou");
    }
    else if (round < 0)//se os pontos forem menores que zero o ken ganha//
    {
        printf("Ken ganhou");
    }
    else// se forem igual a zero eles empatam//
    {
        printf("Empate");
    }
}
