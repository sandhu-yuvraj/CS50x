#include <stdio.h>
int main(void)
{
    int n;
    while (1){
        printf("What's n? ");
        scanf("%d" , &n);
        if (n<0) {continue;}
        else {break;}
    }
    for (int i = 0; i<n; i++)
    printf ("meow\n");
    return 0;
}
