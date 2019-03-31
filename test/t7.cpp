#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int Fib(int i){


int value = 0;

if(i < 1) return 0;

if(i == 1) return 1;

return Fib(i-1) + Fib(i - 2);

}

int main(){
    ofstream file ("fib.txt");
    if(file.is_open()){



int i = 0;
int c;
cin>>c;

while(i < c)

{


        file <<  Fib(i) << endl;
        i++;

}

return 0;
}


else cout << "unable to open file\n";
}
