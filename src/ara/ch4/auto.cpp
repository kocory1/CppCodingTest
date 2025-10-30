// STL 어떤 타입이라도 사용할 수 있도록 잘 설계됨. 
// 타입이 복잡해질수록 가독성이 떨어짐 -> auto 키워드 사용 권장

#include <iostream>
# include <vector>
# include <map>
# include <string>
# include <set>

using namespace std;

int main(){
  auto a =10;
  auto b =3.14;
  auto c = 'A';
  auto d = "Hello World";
  cout << a << ", " << b << ", " << c << ", " << d << endl;

  // 범위 기반 반복문
  // 배열이나 컨테이너의 모든 원소를 순회할때 사용
  // vector
  vector<int> vec = {1,2,3,4,5};
  for(int num:vec){ // 타입 변수명: 컨테이너명
    cout<<num<<" ";
  }
  cout<<endl;
  // map -> const auto& 사용 권장 : 값을 바꾸는 것이 아니라 읽기만 할 때
  map<string,int> fruitMap={{"apple",3}, {"banana",5}, {"orange",2}};
  for (const auto& pair : fruitMap){ // pair.first, pair.second
    cout<<pair.first<<"="<<pair.second<<" ";
  }
  cout<<endl;
  //set
  set<string> fruitSet={"apple", "banana", "orange"};
  for (const auto& fruit:fruitSet){
    cout<<fruit<<" ";
  }
  cout<<endl;
}

// auto 키워드 -> 변수 선언 시 변수 타입을 자동으로 추론하여 지정