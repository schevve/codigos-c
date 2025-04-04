#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Digite um numero: ");
    if (scanf("%d", &n) != 1) 
    {
        printf("Erro na leitura do numero.\n");
        return 1;
    }
    if (n % 2 == 0) 
    {
        printf("O numero %d e par e sua raiz quadrada e %.2f.\n", n, sqrt(n));
    } 
    else 
    {
        printf("O numero %d e impar e sua metade e %.2f.\n", n, n / 2.0);
    }
    return 0;
}