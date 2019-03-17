#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
    string num;
    cout << "У вас фигура плоская или обьемная:";
    setlocale(LC_ALL, "Rus");
    cin >> num;
    if (num == "плоская")
    {
            int x;
        cout << "Введите длину фигуры:";
        cin >> x;
        int y;
        cout << "Введите ширину фигуры:";
        cin >> y ;
        cout <<"Площадь данной фигуры:"<< x * y << endl;
        cout << "Периметр равен:" << 2 * x + 2 * y<< endl;

    }
    else if (num == "обьемная")
    {
        int x;
        cout << "Введите длину фигуры:";
        cin >> x;
        int y;
        cout << "Введите ширину фигуры:";
        cin >> y;
        int z;
        cout << "Введите высоту фигуры:";
        cin >> z;
        cout <<"Обьем данной фигуры:"<< x * y * z<< endl;

    } else {
        string num1;
        cout << "Пожалуйста, скажите ваша фигура плоская или обьемная:";

        cin >> num1;
        if (num1 == "плоская") {
                int x;
                cout << "Введите длину фигуры:";
                cin >> x;
                int y;
                cout << "Введите ширину фигуры:";
                cin >> y ;
                cout <<"Площадь данной фигуры:"<< x * y << endl;
                cout << "Периметр равен:" << 2 * x + 2 * y<< endl;

    } else if (num1 == "обьемная") {
                int x;
                cout << "Введите длину фигуры:";
            cin >> x;
            int y;
            cout << "Введите ширину фигуры:";
            cin >> y;
            int z;
            cout << "Введите высоту фигуры:";
            cin >> z;
            cout <<"Обьем данной фигуры:"<< x * y * z<< endl;

    } else {
            cout << "Мне надоело!";
    }
     return 0;
}
}