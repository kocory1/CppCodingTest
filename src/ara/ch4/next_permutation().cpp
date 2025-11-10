// 가능한 모든 순열을 생성하는 함수
// 시작, 끝 반복자 두개 받음, 사전 순, 가능 true/false 반환
// O(N*N!)
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> v={1,2,3};
  do{
    for(int i:v){
      cout<<i<<" ";
    }
    cout<<endl;
  }while(next_permutation(v.begin(),v.end()));

}// 데이터가 사전 순으로 정렬된 상태여야함 즉 정렬후에 넣어야함