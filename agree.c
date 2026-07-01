#include <stdio.h>
int main(void){
     char c;
    printf("Do you agree? ");
    scanf(" %c" , &c); // Answer in y or Y
    printf("You entered: %c\n" , c);
    if (c == 'y' || c == 'Y')
    {printf ("Agreed\n");}
        else {printf ("Not agreed\n");}
        return 0;
}
