#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um numero para que seja exibida a sua tabuada: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}