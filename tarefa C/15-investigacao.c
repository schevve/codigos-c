#include <stdio.h>
#include <string.h>

int main(void)
{
    char resposta[4];
    int classificacao = 0;
    
    printf("Responda as perguntas com 'sim' ou 'nao'\n");

    printf("Telefonou para a vitima? ");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0)
    {
        classificacao++;
    }
    printf("Esteve no local do crime? ");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0)
    {
        classificacao++;
    }
    printf("Mora perto da vitima? ");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0)
    {
        classificacao++;
    }
    printf("Devia para a vitima? ");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0)
    {
        classificacao++;
    }
    printf("Ja trabalhou com a vitima? ");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0)
    {
        classificacao++;
    }
    // julgamento
    if (classificacao == 2)
    {
        printf("Suspeita\n");
    }
    else if (classificacao == 3 || classificacao == 4)
    {
        printf("Cumplice\n");
    }
    else if (classificacao == 5)
    {
        printf("Assassino\n");
    }
    else
    {
        printf("Inocente\n");
    }
}