#include <iostream>
#include <string>
#include <locale.h>



using namespace std;



string st1;

int main()
{
    setlocale(LC_ALL, "Rus");

    cin >> st1;

    if(st1 == "Привет"||"привет"){
            cout << "Привет,привет";
    }else
    if(st1 == "Пока"||"пока"){
        cout << "Пока,пока";
    }
    else{
            cout << "Задача не корректна";
    }





    return 0;
}