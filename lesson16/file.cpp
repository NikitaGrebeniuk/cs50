#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main (void){
    ofstream file;
    string path = "lesson/";
    string name ="example.txt";
    string full = path + name;
    char* y =new char[y,full.length()+1];
    strcpy(y,full.c_str());
    file.open(y, ios::out);
    if(file.is_open()){
        file << "Writing this to file5.\n";
    }
file.close();
return 0;
}