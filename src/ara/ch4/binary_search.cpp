// 이진 탐섹 수행 -> 시작,끝 반족자, 찾을 값 3개 -> true/false 반환
// O(log n)
// 이진 탐색을 수행하기 위해서는 반드시 정렬이 되어 있어야함
// 데이터가 이미 정렬되어 있고 원소를 자주 탐색해야 한다면 이진 탐색이 배열을 순차 탐색하는 것보다 유용함
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
  vector<int> v={1,2,3,4,5,6,7,8,9};
  int target=5;
  cout<<binary_search(v.begin(),v.end(),target)<<endl; // true
  target=10;
  cout<<binary_search(v.begin(),v.end(),target)<<endl; // false
  return 0;
}
