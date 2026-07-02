#include <stdio.h>
int main (void)
{
          int number ;
           printf("How many numbers do you want to add? ");
           scanf("%d", &number);

       float sum = 0;
       for ( int i=0; i < number ; i++ )
   {

         float value ;
         printf("What's n? ");
         scanf("%f" , &value);
         sum += value;
   }

     printf ("Answer: %f\n" , sum);

  return 0;
}
