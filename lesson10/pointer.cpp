#include <iostream>

using namespace std;

int main (void)
{

    int count = 5;
    int *p_count;

    p_count=&count;

    cout <<&count<< endl;
    cout<<p_count <<endl;
}