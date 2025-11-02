// 정렬되지 않은 셋과 맵
#include <iostream>
#include <unordered_set>  
#include <unordered_map>
# include <map>
using namespace std;

int main(){
  // Olog(1) 삽입, 삭제,  -> 기존 셋, 맵보다 빠름(Olog n)
  // unordered_set
  unordered_set<int> us={5,3,8,1,2}; 
  us.insert(4);
  us.insert(9);
  for (int num: us){
    cout<<num<<" "; //순서 없음
  }
  cout<<endl;
  // unordered_map
  map<int, double> um={
    {35,4.5},
    {32,3.8},
    {20,3.9}
  };
  um[25]=4.0; //삽입
  um.insert({28,3.7}); //삽입
  for (const auto& pair: um){
    cout<<pair.first<<": "<<pair.second<<endl; //순서 없음
  }
}