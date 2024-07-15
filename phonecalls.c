#include <stdio.h>
#include <cs50.h>

int main(void)
{
   string n = get_string("write your name: ");
   int y = get_int("write your age: ");
   string z = get_string("write your phone number: ");
    printf("Name is %s. Age is %i. Phone number is %s.\n", n, y, z);

}
