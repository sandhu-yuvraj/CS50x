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