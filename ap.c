/* 
 * Arithmetic Progression (A.P.) Generator
 * This block generates a linear sequence of numbers starting from a base value.
 * Each subsequent term is calculated by adding a fixed common difference.
 * The formula used to calculate the nth term directly is: T_n = a + (n - 1) * d.
 * A loop runs exactly 'n' times to compute and display every term in order and get their sum.
 * This pattern is widely used in tracking regular increments and linear growth.
 */
#include <stdio.h>
int main(){
    double firstTerm;
    printf("First term of AP: ");
    scanf("%lf" , &firstTerm);
    double diff;
    printf("Enter commom difference: ");
    scanf("%lf" , &diff);
    int terms;
    printf("Enter number of terms: ");
    scanf("%d" , &terms);
    int nth = firstTerm + (terms-1)*diff ;
    int sum = 0;
    for ( int i =firstTerm ; i <= nth ; i+=diff)
    {
        printf("%d " , i);
        sum += i;
    }
    printf("\n");
     printf("Sum of terms of AP: %d\n" , sum);
     printf("nth term is: %d\n" , nth);
       return 0;
}