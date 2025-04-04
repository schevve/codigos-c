#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 999; i++)
    {
        if (i % 11 == 5)
        {
            printf("%d mod 11 = 5\n", i);
        }
    }
}