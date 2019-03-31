#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main (void){
    ofstream file;
    string name ="output.txt";
    string full =name;
    char* y =new char[y,full.length()+1];
    strcpy(y,full.c_str());
    file.open(y, ios::out);
    if(file.is_open()){
        string c;
        cin>>c;
        file << c<<endl;0
        string a;
        cin>>a;
        file << a<<endl;
        string s;
        cin>>s;
        file << s<<endl;

    }
file.close();
return 0;
}