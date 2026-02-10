#include <iostream>

using namespace std;

int main() {
    int intArray[3]= {1,2,3};
    double doubleArray[3] = {1.1,2.2,3.3};
    char charArray[3] = {'a','b','c'};
    
    cout << "Int Array" << endl;
    cout << &intArray[0] << endl;
    cout << &intArray[1] << endl;
    cout << &intArray[2] << endl;
    
    cout << "Double Array" << endl;
    cout << &doubleArray[0] << endl;
    cout << &doubleArray[1] << endl;
    cout << &doubleArray[2] << endl;
    
    cout << "Char Array" << endl;
    cout << (void *)&charArray[0] << endl;
    cout << (void *)&charArray[1] << endl;
    cout << (void *)&charArray[2] << endl;
}