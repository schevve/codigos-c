#include <stdio.h>

int main(void)
{
    float altura, peso, imc;
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em cm: ");
    scanf("%f", &altura);
    altura /= 100;
    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);
    return 0;
}