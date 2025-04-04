#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int *n = malloc(sizeof(int));
    printf("digite um numero: ");
    scanf("%d", n);
    if (*n > 0)
    {
        printf("o numero é positivo\n");
        printf("a raiz quadrada do numero e %.2f\n", sqrt(*n));
    }
    else if (*n < 0)
    {
        printf("o numero e negativo\n");
    }
    else
    {
        printf("o numero e zero\n");
    }
    return 0;
}