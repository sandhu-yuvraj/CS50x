#include <cs50.h>
#include <stdio.h>
int main(void)
{
    printf("Create a New Contact\n");

     string name = get_string("Name: ");
     int age = get_int("Age: ");
     long number = get_long("Phone Number: ");
     string location = get_string("Location: ");

     printf("%s, %i, lives in %s and can be contacted at %li\n", name, age, location, number);

     return 0;

}

