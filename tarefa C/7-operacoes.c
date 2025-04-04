#include <stdio.h>

int main(void)
{
    float x;
    float y;
    printf("Digite o primeiro numero: ");
    if (scanf("%f", &x) != 1)
    {
        printf("Erro na leitura do numero.\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if (scanf("%f", &y) != 1)
    {
        printf("Erro na leitura do numero.\n");
        return 1;
    }

    float soma = x + y;
    float subtr = x - y;
    float multi = x * y;
    float div;
    if (y != 0)
    {
        div = x / y;
    }

    printf("%.2f + %.2f = %.2f\n", x, y, soma);
    printf("%.2f - %.2f = %.2f\n", x, y, subtr);
    printf("%.2f * %.2f = %.2f\n", x, y, multi);
    if (y != 0)
    {
    printf("%.2f / %.2f = %.2f\n", x, y, div);
    }
    else
    {
        printf("Nao e possivel dividir por 0.\n");
    }
    return 0;
}
    