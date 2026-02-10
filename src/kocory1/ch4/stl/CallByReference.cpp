#include <iostream>

using namespace std;

void modify(int &value)
{
    value = 10;
    cout << "주소 " << &value << endl;
    cout << "값 : " << value << endl;
}

int main()
{
    int value = 5;
    cout << "주소 " << &value << endl;
    cout << "값 : " << value << endl;

    modify(value);
    cout << "주소 " << &value << endl;
    cout << "값 : " << value << endl;
}
