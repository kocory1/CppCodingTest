// 순회 및 접근 가능
// 순방향 반복자 -> begin(), end()
#include <iostream>
#include <vector>
# include <algorithm>
# include <map>

using namespace std;

int main(){
  // vector 예제
  vector<int> vec ={10,20,30,40,50};
  // 순회
  for (auto it=vec.begin(); it!=vec.end(); ++it){
    cout<<*it<<" ";
  }
  cout<<endl;

  // 탐색
  auto result = find(vec.begin(),vec.end(),100);
  if (result!=vec.end()){
    cout<<"found: "<<*result<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }

  //map
  map<string, int> Map ={{"apple",3}, {"banana",5}, {"orange",2}};
  for (auto it=Map.begin();it!=Map.end();++it){
    cout<<it->first<<"="<<it->second<<endl;
  }
  // 탐색
  auto resultMap=Map.find("banana");
  if (resultMap != Map.end()){
    cout<<"found: "<< resultMap->first<<"="<<resultMap->second<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }

}