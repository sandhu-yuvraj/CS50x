#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int comp_score(string word);
int main(void)
{
    string x = get_string("Player 1:  ");
    string y = get_string("Player 2:  ");
    int p = comp_score(x);
    int q = comp_score(y);

    if (p < q)
    {
        printf("Player 2 wins!\n");
    }
    else if (q < p)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Tie!\n");
        return 0;
    }
}
int comp_score(string word)
{
    int score = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            char letter = toupper(word[i]);
            score += points[letter - 'A'];
        }
    }
    return score;
}
