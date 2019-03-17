#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char name[15];
    char color[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your favourite: ";
    cin >> color;
    cout << "Your name is " << name << " , and your favourite color is " << color << endl;
    return 0;
}