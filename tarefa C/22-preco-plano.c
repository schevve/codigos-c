#include <stdio.h>

int main(void)
{
    int idade, adicional;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 10){
        adicional = 80;
    }
    else if (idade >= 10 && idade < 30)
    {
        adicional = 50;
    }
    else if (idade >= 30 && idade < 60)
    {
        adicional = 95;
    }
    else if (idade >= 60)
    {
        adicional = 130;
    }
    else
    {
        printf("Idade inválida.\n");
        return 1;
    }

    printf("O valor do plano para uma pessoa de %d anos e: R$%d,00.\n", idade, 100 + adicional);
    return 0;
}