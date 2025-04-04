#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Digite um numero:\n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("O triplo de %d e %d\n", n, n * 3);
    }
    else if (n < 0)
    {
        printf("O quadrado de %d e %d\n", n, n * n);
    }
    return 0;
}   