# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
// 문제 1: 배열 정렬하기
// 제약사항: arr 길이 2 이상 100000이하 , 원소 값 -1000000 이상 1000000 이하
vector<int> solution(vector<int> arr){
  sort(arr.begin(),arr.end());
  return arr;
}
int main(){
  vector<int> arr={1,-5,2,5,3};
  vector<int>answer=solution(arr);
  for (auto it: answer){
    cout<<it<<" ";
  }
}