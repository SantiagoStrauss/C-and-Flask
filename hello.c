#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string first = get_string("what is your name? ");
    string last = get_string("what is your last name? ");
    printf("Hello, %s %s!\n", first, last);
}
