#include  <iostream>  
using namespace std;

void modify(int& value){
  value=10;
  cout << "주소 "<< &value << endl; // value 주소 출력
  cout << "값 "<<value<< endl;
}

int main(){
  int value=5;
  cout << "주소 "<< &value << endl; // main value 주소 출력
  cout << "값 "<<value<< endl;
  modify(value); // modify 호출
  cout << "주소 "<< &value << endl; // main value 주소 출력 -> 변화 있음
  cout << "값 "<<value<< endl;      // main value 값 출력 -> 변화 있음

  // 포인터? -> 참조 변수와 비슷한 개념 
  // 메모리 값을 읽고 쓰기 위한 추가 문법이 필요 없음 , 주고 삾을 받기 위한 초인터 변수를 사용해야함. -> 포인터 문법이 필요함
  // 참조 변수 -> 별도의 문법 없이도 값을 주고 받을 수 있음 -> 코드가 간결해짐
  // 실 인수값을 변경한다는 목적에는 차이가 없으나 포인터 문법 사용 유무에 차이가 있음
  // 1. 의도하지 않은 예외 발생 
  // 2. 포인터 문법, 간접 참조하므로 주소를 얻을때와 값을 얻을 때 별도의 문법이 필요함 -> 코드가 복잡해짐
}