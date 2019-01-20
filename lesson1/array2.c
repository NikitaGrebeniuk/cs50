#include <stdio.h>
#include <cs50.h>

#define CLASS_SIZE 3

int main (void)
{
    string names[CLASS_SIZE] = {"Zhanna+Nikita=love", "Zhanna+Varya=love", "Zhanna+Family=love"};

    for(int i = 0; i < CLASS_SIZE; i++)
    {
        printf("%s\n",names[i]);

    }
}
