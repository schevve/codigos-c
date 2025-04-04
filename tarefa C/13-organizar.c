#include <stdio.h>

int main(void)
{
    int entrada[5];
    int size = sizeof(entrada) / 4;

    // le 'size' numeros
    printf("Entre com os numeros que serao ordenados utilizando um algoritmo de selection sort:\n");
    int input_success = 0;
    for (int i = 0; i < size; i++)
    {
        do
        {
            printf("%d: ", i + 1);
            input_success = scanf("%d", &entrada[i]);
            while(getchar() != '\n');
        }while(input_success != 1);
        
    }

    // ORGANIZAR
    int pos;
    int temp;
    int temp2;
    // repetir 'size' vezes o algoritmo que encontra o menor número a partir do index atual e posiciona no index
    for (int i = 0; i < size; i++)
    {
        temp = entrada[i]; // a cada iteração, o número do index atual e sua posição são selecionados primeiro para comparação
        pos = i;
        // comparar o menor número atual com o j (index), se for menor, seu valor e posição são lembrados
        for (int j = i; j < size; j++)
        {
            if (entrada[j] < temp)
            {
                temp = entrada[j];
                pos = j;
            }
        }
        // troca os valores de entrada[i] e entrada[pos]
        temp2 = entrada[i];
        entrada[i] = temp;
        entrada[pos] = temp2;
    }
    
    // imprimir na tela
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", entrada[i]);
    }
    return 0;
}