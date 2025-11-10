// 중복 되는 원소들을 뒤로 밀어내고 중복되지 않은 원소들만 남겨 새로운 범위의 끝 반복자를 반환함.
//O(N)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  vector<int> v={1,1,2,2,3,3,4,4,5};
  auto it=unique(v.begin(),v.end());
  for(auto i=v.begin();i!=it;++i){
    cout<<*i<<" ";
  }
  cout<<endl;
  cout<<v.size()<<endl; // 원래 벡터 크기
  for(auto j=v.begin();j!=v.end();++j){
    cout<<*j<<" "; // 벡터 전체 출력
  }
  cout<<endl;
  return 0;
}