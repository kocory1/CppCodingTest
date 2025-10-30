// 부동 소수형
#include <iostream>   
using namespace std;
int main(){
  double a=5.3;
  double b=2.0;
  cout << a+b << endl;
  cout << a-b << endl;
  cout << a*b << endl;
  cout << a/b << endl;

  double d=2.5;
  float f=1.2f;
  cout<< sizeof(d) << endl; // 8 -> 8바이트
  cout<< sizeof(f) << endl; // 4 -> 4바이트
  cout << d+f << endl;
  cout << d << " "<< f << endl;

  // 형 변환
  int i =65;
  float f2 =5.2f;
  double d2=i+f2;
  cout << d2 << endl; // 70.2 -> int가 float로 변환되어 연산 후 double로 변환 / 메모리가 큰 float 으로 저장됨
  // 대놓고
  cout << static_cast<int>(d2) << endl; // 70 -> double에서 int로 변환 시 소수점 아래는 버려짐
  cout << static_cast<char>(i) << endl; // A -> 아스키 코드 65에 해당하는 문자

  return 0;
}