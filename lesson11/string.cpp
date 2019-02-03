#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
template<typename Container>
bool is_quote(const Container&  c, const string& s)
{
    return search(c.begin(), c.end(), s.begin(), s.end()) != c.end();
}
int main(int argc,const char *argv[])
{
    //string str = "Здесь может  распологаться Ваша  реклама    с несколькими пробелами!";
    string str = "history               lansklnjkjvcnzdjxlkb cjk!";
    str.erase(std::remove(str.begin(), str.end(), 'a'), str.end());

    cout << str <<std::endl;
    //std::cout << str <<std::endl;

    vector<char> vec(str.begin(),str.end());
    cout << boolalpha << is_quote(vec, "asa") << '\n'
                      << is_quote(vec, "машина") << '\n';
    for(int i = 0; i <vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    //vector <int> vec(10);// = {1,2,3,4,5,6,123,1234};
    // for(int i = 0; i < vec.size(); i++)
     //{
    //     vec[i] = i * i;
    // }
    //vec[0] = 12;
    //vec[4] = 124;
    //vec[2] = 1234;
    //vec[1] = 323;
    //vec[7] = 123124;
    //for(int i =0; i < vec.size(); i++)
    //{
    //    cout << vecc[i] << "\t"
    //}

    cout << endl;
    // swap()
    // search()
    // binary_search()
    // sort()
    // is_sorted()
    return 0;
}



