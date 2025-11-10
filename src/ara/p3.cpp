// 문제3: 두 수를 뽑아서 더하기
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
// numbers 배열의 길이는 2 이상 100 이하
// numbers의 원소는 0 이상 100 이하
// 정수 배열 numbers가 주어짐, numbers에서 서로 다른 인덱스에 있는 두 개의 수를 뽑아 더해서 만들 수 있는 모든 수를 배열에 오름차순으로 담아 반환하는 함수 작성하기
vector<int>solution(vector<int> numbers){
  // 중복 허용 안하고 정렬
  vector<int>S;
  for (int i=0;i<numbers.size();i++){
    for (int j=i+1;j<numbers.size();j++){
      int sum=numbers[i]+numbers[j];
      S.push_back(sum);
    }
  }
  sort(S.begin(),S.end());
  S.erase(unique(S.begin(),S.end()),S.end());
  return S;
}

int main(){
  vector<int>numbers={5,0,2,7};
  vector<int>answer=solution(numbers);
  for (auto it: answer){
    cout<<it<<" ";
  }
}