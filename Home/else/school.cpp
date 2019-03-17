
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdio>
#include <cstdlib>


using namespace std;
int main () {
    int x,c,y,z,k,v;
    cin >> x;
    cin >> c;
    cin >> y;
    int z =x*x;
    int  k=c*c;
    int v =y*y;
    if(x>c,x>y,c<y){
        cout << z;
        cout << k;
    }
    else if(y>c,y>x,c<x){
        cout <<v ;
        cout >> k;
    }
    else if(c>x,c>y,x<y){
        cout << k;
        cout << z;
    }
    else if(x>c,x>y,y<c){
        cout << z ;
        cout << v;
    }
    else if(y>c,y>x,x<c){
        cout <<v  ;
        cout << z;
    }
    else(c>x,c>y,y<x){
        cout << k ;
        cout << v;
    }
}