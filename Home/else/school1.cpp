
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdio>
#include <cstdlib>


using namespace std;
int main () {
    int x,c,y;
    cin >> x;
    cin >> c;
    cin >> y;
    int z =x*x;
    int k =c*c;
    int v =y*y;
    if(x>c,x>y,c<y){
        cout << z << endl;
        cout << k << endl;
    }
    else if(y>c,y>x,c<x){
        cout <<v << endl;
        cout << k << endl;
    }
    else if(c>x,c>y,x<y){
        cout << k<< endl;
        cout << z<< endl;
    }
    else if(x>c,x>y,y<c){
        cout << z<< endl;
        cout << v<< endl;
    }
    else if(y>c,y>x,x<c){
        cout << v<< endl;
        cout << z<< endl;
    }
    else if(c>x,c>y,y<x){
        cout << k << endl ;
        cout << v << endl;
    }
}