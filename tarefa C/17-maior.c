#include <stdio.h>

int main(void)
{
    int n, m;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &m);
        if (i == 0)
        {
            n = m;
        }
        else if (m > n)
        {
            n = m;
        }
    }
    printf("O maior numero e: %d\n", n);
}