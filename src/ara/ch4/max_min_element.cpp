// 최대 최소 위치를 반환, 시작 끝 반복자 2개 인수 , o(n)
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
  vector<int> v={4,2,5,1,3};
  auto max_it=max_element(v.begin(),v.end());
  auto min_it=min_element(v.begin(),v.end());
  cout<<"max:"<<*max_it<<", min:"<<*min_it<<endl;
  return 0;
}