#include <stdio.h>
#include <cs50.h>

#define CLASS_SIZE 3

int main (void)
{
    int temperature[CLASS_SIZE];
    temperature[0] = 55;
    temperature[1] = 25;
    temperature[2] = 75;

    for(int i = 0; i < CLASS_SIZE; i++)
    {
        printf("%i\t",temperature[i]);
        temperature[i] = i;
        printf("%i\n",temperature[i]);
    }
}
