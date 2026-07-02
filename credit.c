//This program uses Luhn's algorithm
/*
 * THE LUHN ALGORITHM (MOD 10) VALIDATION STEPS:
 * --------------------------------------------
 * 1. Multiply every second digit by 2, starting from the number's 
 *    second-to-last digit and moving backward (right-to-left).
 * 
 * 2. Add those products' digits together. If a product is a double digit 
 *    (e.g., 12 or 16), split and sum its individual digits (e.g., 1 + 2 = 3).
 * 
 * 3. Add that sum to the sum of all the remaining digits (the ones that 
 *    were NOT multiplied by 2, including the very last check digit).
 * 
 * 4. If the total sum ends in 0 (Total Sum % 10 == 0), the card number 
 *    is mathematically valid. Otherwise, it is INVALID.
 */
#include <stdio.h>
int main(void)
{
   long long number;
    printf("Number: "); // Enter credit card number without spaces
    scanf("%lld" , &number);
    long long copy = number;
    int length = 0;
    while (copy > 0)
    {
        copy = copy / 10;
        length++;
    }
    copy = number;
    int sum = 0;
    int position = 0;
    while (copy > 0)
    {
        int digit = copy % 10;
        if (position % 2 == 1)
        {
            digit = digit * 2;
            if (digit > 9)
            {
                digit = digit - 9;
            }
        }
        sum += digit;
        copy = copy / 10;
        position++;
    }
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 1;
    }
    long long first = number;
    while (first >= 100)
    {
        first = first / 10;
    }
    if (length == 15 && (first == 34 || first == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (first >= 51 && first <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && first / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
