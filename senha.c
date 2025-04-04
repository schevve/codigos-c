#include <stdio.h>
#include <string.h>

int main(void)
{
    char senha[5];
    char input[5] = "9568";
    printf("digite a senha:\n\n");
    int count = 0;
    while (strcmp(senha, "9568") != 0)
    {
        if (count > 0)
        {
            printf("senha incorreta!\n\n");
        }
        count++;
        scanf("%4s", senha);
    }
    printf("acesso liberado!\n");
    return 0;
}