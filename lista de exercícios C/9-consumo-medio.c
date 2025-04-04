#include <stdio.h>

int main(void)
{
    float distancia, gasto, consumo_medio;

    printf("Digite a distancia percorrida: ");
    if (scanf("%f", &distancia) != 1)
    {
        printf("Erro na leitura do numero.\n");
        return 1;
    }
    printf("Digite o gasto de combustivel em litros: ");
    if (scanf("%f", &gasto) != 1)
    {
        printf("Erro na leitura do numero.\n");
        return 1;
    }
    consumo_medio = distancia / gasto;

    printf("O consumo medio de combustivel e: %.2f km/l\n", consumo_medio);
    return 0;
}