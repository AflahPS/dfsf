#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int h, i, j;
    printf("Enter the height of the pattern: \t");
    scanf("%d", &h);

    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 2*(h-i); j++)
        {
            printf("$ ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}