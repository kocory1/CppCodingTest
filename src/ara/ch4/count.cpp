// count함수: 반복자, 끝 반복자, 횟수를 확인할 값
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  vector<int> v={1,1,2,3,3,4,4,4,5,5};
  int res=count(v.begin(),v.end(),5);
  cout<<res<<endl;
  return 0;
}