#include <stdio.h>

int sum(int a, int b);

int main ()
{
    int x = 0,y = 0;
    printf("введите переменную 1 : ");
    scanf("%i",&x);
    printf("введите переменную 2 : ");
    scanf("%i",&y);
    printf("сумма %i и %i равна %i\n",x,y,sum(x,y));
}

int sum(int a, int b)
{
    return a + b;
}