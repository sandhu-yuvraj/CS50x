#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int width = get_int("What's width? ");
    int height = get_int("What's height? ");

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)

        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
