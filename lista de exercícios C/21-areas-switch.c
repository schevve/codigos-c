#include <stdio.h>

int main(void)
{
    char operacao;
    printf("C: area de um circulo\nR: area de um retangulo\nQ: area de um quadrado\n");
    printf("Digite a operacao desejada: ");
    scanf("%c", &operacao);

    if (operacao > 90)
    {
        operacao = operacao - 32;
    }
    float area;
    switch (operacao)
    {
        case 'C':
            float raio;
            printf("Digite o raio do circulo: ");
            scanf("%f", &raio);
            area = 3.14 * raio * raio;
            printf("Area = %f\n", area);
            break;
        case 'R':
            float base, altura;
            printf("Digite a base do retangulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("Area = %f\n", area);
            break;
        case 'Q':
            float lado;
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("Area = %f\n", area);
            break;
        default:
            printf("Operacao invalida\n");
    }
    return 0;
}