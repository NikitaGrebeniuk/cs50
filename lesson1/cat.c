
//switch

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Promt user for ancwer
    char  c = get_char(" G(g) or N(n): ");
    char  c2 = get_char("G(g) or N(n): ");

    // Check answer
    switch (c)

    {
    case 'n':
    case 'N':
        printf("Никита\n");
        break;
    case 'G':
    case 'g':
        printf("Жанна\n");
        break;
    }
    switch(c2)
        {
        case 'g':
        case 'n':
        case 'G':
        case 'N':
            printf("Жанна+Никита");
            break;
        }

}