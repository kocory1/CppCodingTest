#include <string>
#include <iostream>

using namespace std;
int main()
{
    // 문자열 초기화
    string str = "APPLE";
    str += ", World!";
    cout << str << endl;

    str[7] = 'P';
    cout << str << endl;

    str.replace(7, 4, "Col");
    cout << str << endl;
}