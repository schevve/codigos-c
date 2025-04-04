#include <stdio.h>

int main(void)
{
    int entrada[3];
    int organizado[3];
    //obtém entrada do usuário
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %d numero", i + 1);
        int leitura = scanf("%f", entrada[i]);
        if (leitura != 1)
        {
            printf("Erro na leitura dos números.\n");
            return 1;
        }
    }

    //organiza o array de forma crescente
    for (int i = 0; i < 3; i++)
    {
        //todo
        
    }
}