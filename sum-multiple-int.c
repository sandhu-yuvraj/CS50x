#include <cs50.h>
#include <stdio.h>
int main (void)
{
       int number = get_int ("How many numbers do you want to add? ");
       int sum = 0;
       for ( int i=0; i < number ; i++ )
   {

         int value = get_int ("What's n? ");
         sum += value;
   }

     printf ("Answer: %i\n" , sum);

  return 0;
}
