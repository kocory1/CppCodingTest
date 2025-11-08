// 문제2: 배열제어하기
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
// 정수 배열 1st 주어짐, 배열의 중복값을 제거하고 배열 데이터를 내림차순으로 정렬해서 반환하는 함수 수하기

vector<int> solution(vector<int> arr){
  // unique 함수를 사용=> 정렬을 먼저 해야함!!!
  sort(arr.rbegin(),arr.rend());
  arr.erase(unique(arr.begin(),arr.end()),arr.end());
  return arr;
}
int main(){
  vector<int>arr={4,2,2,1,3,4};
  vector<int>answer=solution(arr);
  for (auto it: answer){
    cout<<it<<" ";
  }
}