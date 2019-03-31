#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double q;
    double w;
    double e;
    double x;
    cout << "a: ";
    cin >> q;
    cout << "b: ";
    cin >> w;
    cout << "c: ";
    cin >> e;
    if((w*w - 4*q*e) >= 0)
    {
        x = ( -1*w + sqrt(w*w - 4*q*e) ) / (2 * q);
        cout << "x1= " << x << endl;
        x = ( -1*w - sqrt(w*w - 4*q*e) ) / (2 * q);
        cout << "x2= " << x << endl;
    }

    return 0;
}