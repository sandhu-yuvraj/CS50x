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
    for ( int i =1 ; i <= terms ; i+=diff)
    {
        printf("%d " , i);
    }
       return 0;
}