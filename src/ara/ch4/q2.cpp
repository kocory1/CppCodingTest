# include <iostream>
using namespace std;

int main(){
  int a=10;
  int b=3;
  cout << a-b << endl;
  cout << a/b << endl;
  cout << a%b << endl;
  cout << (a==b) << endl;
  cout << (a!=b) << endl;
  cout << (a>b) << endl;
  cout << (a<b) << endl;  
  cout << (a&b) << endl; // 비트 연산 직렬 연결 -> 0011 / 1010 = 2 (0010)
  cout << (a|b)<< endl; // 비트 연산 병렬 연결 -> 0011 / 1010 = 11 (1011)
  return 0;
}