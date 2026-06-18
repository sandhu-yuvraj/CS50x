#include <cs50.h>
#include <stdio.h>
int main (void)
{
    int n = get_int("What's n? ");
    int sum = 0;
    for (int i = 1 ; i<= n; i++)
    {
        sum += i;
    }

    printf ("%i\n" , sum);
    return 0;
}
