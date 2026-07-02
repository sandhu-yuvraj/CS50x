#include <stdio.h>
int main(void)
{
    int n;

    do
    {
           printf("What's n? ");  // enter n between 1 and 8 (inclusive)
            scanf("%d", &n);

    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int k = 0; k <= i; k++)
            printf("#");
        printf("  ");
        for (int m = 0; m <= i; m++)
            printf("#");
        printf("\n");
    }
    return 0;
}
