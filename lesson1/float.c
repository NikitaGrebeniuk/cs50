// Floating-point arithmetic

#include <cs50.h>
#include<stdio.h>
int main (void)
{
    // Prompt user for xmake
    float x = get_float("x: ");

    // Prompt user for y
    float y = get_float("y: ");

    // Perform division
    printf("деление=%f divided by %f is %f\n", x, y, x / y);
    printf("умножение=%F * %f is %f\n", x, y, x * y);
    printf("сумма=%f + %f is %F\n", x, y, x + y);
    printf("разность=%f - %f is %F\n", x, y, x - y);

    return 0;
}
