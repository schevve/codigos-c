#include <stdio.h>

int main() {
    printf("Digite um numero: ");
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Erro na leitura do numero.\n");
        return 1;
    }
    printf("Antecessor: %d\nSucessor: %d", n - 1, n + 1);
    return 0;
}