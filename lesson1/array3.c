#include <stdio.h>
#include <cs50.h>

#define CLASS_SIZE 3

int main (void)
{
    string s = get_string("enter some text: ");

    int length = 0;
    while(s[length] != '\0')
        length++;

    printf("the text has %i symbols \n", length);

}