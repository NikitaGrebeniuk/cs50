#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = 25;
    float y = 6.234;
    double z = 6.23449757987753249085;
    short  a = 234;

    printf("size of x is %lu\n",sizeof (x));
    printf("size of int type is %lu\n",sizeof(int));
    printf("size of y is %lu\n",sizeof (y));
    printf("size of float type is %lu\n",sizeof (float));
    printf("size of z is %lu\n",sizeof (z));
    printf("size of double type is %lu\n",sizeof (double));
    printf("size of a is %lu\n",sizeof (a));
    printf("size of short type is %lu\n",sizeof (short));

    return 0;
}