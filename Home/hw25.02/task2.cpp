#include <stdio.h>
#include <iostream> //Подключаем библиотеку, обрабатывающую
 //стандартные потоки ввода/вывода
//#include <conio.h>


const int ABCSize = 26; //Размер алфавита

const char low_ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; //Массив
 //строчных букв, которые шифруются также строчными
const char high_ch[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; //Массив
 //заглавных букв, которые шифруются также заглавными

std::string cipher(const std::string &input_s, const int shift)
 { //Функция осуществляет сдвиг строки по алфавиту на указанную величину
 bool Ok; //Был ли символ определен как буква алфавита и затем зашифрован
 std::string output_s(""); //Зашифрованная строка, вначале инициализируется
 //пустой строкой
 for(unsigned i = 0; i < input_s.length(); i++)
  { //Для всех символов шифруемой строки
  Ok = false; //Вначале сбрасываем значение флага
  for(int j = 0; j < ABCSize; j++)
   { //Перебираем все буквы алфавита на поиск соответствия
   if (input_s[i] == low_ch[j]) //Если символ оказался строчной буквой алфавита
    {
    j += shift; //Сдвигаем букву по алфавиту на указанное значение
    while (j >= ABCSize) j -= ABCSize; //Если значение вышло за диапазон,
    while (j < 0) j += ABCSize; //корректируем его
    output_s += low_ch[j]; //Добавляем полученный символ в конец
 //зашифрованной строки
    Ok = true; //Символ был благополучно зашифрован и добавлен в строку
    break; //Перебор для данного символа можно закончить
    }
   else if (input_s[i] == high_ch[j]) //То же самое, если символ оказался
 //заглавной буквой алфавита
    {
    j += shift;
    if (j >= ABCSize) j -= ABCSize;
    else if (j < 0) j += ABCSize;
    output_s += high_ch[j];
    Ok = true;
    break;
    }
   }
  if (!Ok) output_s += input_s[i]; //Если символ не является буквой алфавита,
 //записываем его без изменений
  }
 return output_s; //По окончании возвращаем получившуюся строку
 }

int main()
{
std::string s; //Шифруемая/дешифруемая строка

std::cout << "If you want to cipher string, press \"1\", if you want to decode,"
 " press \"2\"";

bool Ok = false; //Корректна ли нажатая клавиша
int shift = 0; //Величина сдвига
while(!Ok) //Пока не будет нажато "1" или "2"
 {
 switch(getchar())
  {
  case '1': //Если нажато "1", шифруем строку
   {
   std::cout << "\nInput shift: ";
   std::cin >> shift;
   std::cout << "Input string to cipher: ";
   while (std::cin >> s) //Шифруем одним и тем же сдвигом по одному слову
    {
    std::cout << cipher(s, shift) << ' ';
    if (std::cin.get() == '\n') break; //Заканчиваем по нажатию Enter
    }
   Ok = true; //Клавиша была нажата корректно
   } break;
  case '2': //Если нажато "2", пытаемся дешифровать строку
   {
   bool Done = false; //Завершен ли процесс дешифровки
   std::cout << "\nInput string to decode: ";
   getline(std::cin, s); //Считываем всю дешифруемую строку
   for (int i = 0; i < ABCSize && !Done; i++) //Пробуем разные величины сдвига
 //до тех пор, пока не расшифруем или не проверим все возможные его значения
    {
    std::cout << "\nWith shift equal " << i << " we have such string:\n";
    std::cout << cipher(s, i);
    std::cout << "\nIf decoding is done, press \"1\"";
    if (getchar() == '1') Done = true; //Строка дешифрована
    }
   Ok = true; //Клавиша была нажата корректно
   } break;
  default: std::cout << "Press either \"1\" or \"2\"!"; //Некорректно нажатая
 //клавиша
  }
 }
getchar();
}