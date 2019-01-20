#include <stdio.h>
#include <cs50.h>

double cub (double number);

int main (){
    double a=get_double("введите число:");
    printf("куб числа %f - %f",a,cub(a));

}

double cub (double number)
{
    return number*number*number;
}