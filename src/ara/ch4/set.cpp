# include <iostream>
# include <set>
using namespace std;
int main(){
  // set -> 자동 정렬 중복 없음
  set<int> s={5,3,8,1,2}; // 12358
  // 13345 -> 1345
  set<int>s2(s);
  // 원소 탐색 -> find
  set<int> num={1,2,3,4,5};
  int targets[]= {3,6};
  for(int target:targets){
    auto result=num.find(target);
    if (result!=num.end()){
      cout<<"found: "<<*result<<endl;
    }
    else{
      cout<<"not found: "<<target<<endl;
    }
  }
  // 삽입 삭제
  set<int> s3={1,3,2,1,5}; // 1 2 3 5
  s3.insert(4);
  s3.erase(2); // 1 3 4 5
  auto it=s3.find(4);
  if (it!=s3.end()){
    cout<<"found: "<<*it<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }
}