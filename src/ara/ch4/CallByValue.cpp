// stl 

#include <iostream>

using namespace std;
void modify(int value){
  value=10;
  cout << "주소 "<< &value << endl; // vlaue 주소 출력
  cout << "값 "<<value<< endl;
}

int main(){
  int value=5;
  cout << "주소 "<< &value << endl; // main value 주소 출력
  cout << "값 "<<value<< endl;
  modify(value); // modify 호출
  cout << "주소 "<< &value << endl; // main value 주소 출력 -> 변화 없음
  cout << "값 "<<value<< endl;      // main value 값 출력 -> 변화 없음
}