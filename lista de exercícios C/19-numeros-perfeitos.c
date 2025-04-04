#include <stdio.h>

int main(void)
{
    int n, soma = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    if (soma == n)
    {
        printf("%d e um numero perfeito.\n", n);
    }
    else
    {
        printf("%d nao e um numero perfeito.\n", n);
    }
    return 0;
}