#include <stdio.h>

void ler_numeros(float *x, float *y);

int main(void)
{
    char operacao;
    do{
        printf("Digite a operacao desejada ( + , - , * , / ): ");
        scanf("%c", &operacao);
        while(getchar() != '\n');
    }while(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/');

    //printf("\n\n%c\n\n", operacao);

    float numero1;
    float numero2;
    ler_numeros(&numero1, &numero2);

    float resultado;
    switch (operacao)
    {
        case '+':
        resultado = numero1 + numero2;
        break;

        case '-':
        resultado = numero1 - numero2;
        break;

        case '*':
        resultado = numero1 * numero2;
        break;

        case '/':
        if (numero2 == 0)
        {
            printf("Nao e possivel dividir por 0\n");
            return 1;
        }
        resultado = numero1 / numero2;
        break;
    }

    printf("O resultado da operacao e \"%.2f %c %.2f = %.4f\"", numero1, operacao, numero2, resultado);

    return 0;
}

void ler_numeros(float *x, float *y)
{
    int leitura;
    do
    {
        printf("Digite o primeiro numero da operacao: ");
        leitura = scanf("%f", x);
        while(getchar() != '\n');
    } while (leitura != 1);
    do
    {
        printf("Digite o segundo numero da operacao: ");
        leitura = scanf("%f", y);
        while(getchar() != '\n');
    } while (leitura != 1);
    printf("\n");
}