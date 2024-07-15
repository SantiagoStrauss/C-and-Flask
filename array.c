#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get the length from the user
    int length;
    do
    {
        length = get_int("length: ");
    }
    while (length < 1);

    //declare our array
    int twice[length];

    //set the first value
    twice[0] = 1;
    printf("%i\n", twice[0]);

    for (int i = 1; i < length; i++)
    {
        //make the current element twice the previous
        twice[i] = twice[i - 1] * 2;

        //print the current element
        printf("%i\n", twice[i]);
    }

}
