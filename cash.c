//This program uses Greedy algorithm
/*
 * THE GREEDY ALGORITHM FOR COIN CHANGE:
 * -------------------------------------
 * 1. Always choose the largest possible coin denomination that is 
 *    less than or equal to the remaining change owed.
 * 
 * 2. Subtract that coin's value from the total change owed and 
 *    increment the coin count.
 * 
 * 3. Repeat this process in descending order of coin values 
 *    until the remaining change owed is exactly 0.
 * 
 * 4. Denominations used (in cents):
 *    - Quarters: 25¢
 *    - Dimes:    10¢
 *    - Nickels:  5¢
 *    - Pennies:  1¢
 */
#include <stdio.h>
int main(void)
{
    int cents;
    do
    {
        printf("Change owed: ");
        scanf("%d" , &cents);
    }
    while (cents < 0);
    int coins = 0;
    coins += cents / 25;
    cents %= 25;
    coins += cents / 10;
    cents %= 10;
    coins += cents / 5;
    cents %= 5;
    coins += cents / 1;
    cents %= 1;
    printf("%d\n", coins);
    return 0;
}