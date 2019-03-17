#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char surname[20];
    char name[5]={'V','l', 'a', 'd'};
    char name1[5]={'V','l', 'a', 'd', '\0'};
    char n[]="ivan";
    //cout << name + name2 << endl;
    cout << strlen(name) << endl;
    cout << strlen(name1)<< endl;


    return 0;
}