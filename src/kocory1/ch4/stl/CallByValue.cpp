#include <iostream>

using namespace std;

void modify(int value) {
    value = 10;
    cout << "주소 " << &value << endl;
    cout << "값 " << value << endl;
    // 함수가 종료되면 modify()의 value는 메모리에서 사라짐
}

int main() {
    int value = 5;
    cout << "주소 : " << &value << endl;
    cout<< "값 : " << value << endl;
    modify(value);
    cout << "값 : " << value << endl;

    return 0;
}