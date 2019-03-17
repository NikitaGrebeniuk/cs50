#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
int main(int n, char* p[])
{
    int c;
    cout << "Введите градусы по Цельсию:";
    cin >> c;
    int f = 212 - 32;
    int b = c*f/100+32;
    cout << "Введенные градусы по Фаренгейту:";
    cout<< b << endl;
    return 0;

}