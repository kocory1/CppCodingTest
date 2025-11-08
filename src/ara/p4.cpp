//문제4: 모의고사
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
// 1번 수포자가 찍는 방식: 1,2,3,4,5 반복
// 2번 수포자가 찍는 방식: 2,1,2,3,2,4,2,5 반복
// 3번 수포자가 찍는 방식: 3,3,1,1,2,2,4,4,5,5 반복
// 정답 배열 answers가 주어짐, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 오름차순으로 반환하는 함수 작성하기
// 시험 최대 10,000, 정답 1,2,3,4,5, 중 하나, 여럿일 경우 오름 차순으로 정렬함
vector<int> solution(vector<int> answers){
  vector<int>counts(3,0);
  vector<int>a={1,2,3,4,5};
  vector<int>b={2,1,2,3,2,4,2,5};
  vector<int>c={3,3,1,1,2,2,4,4,5,5};
  for (int i=0;i<answers.size();i++){
    if (answers[i]==a[i%a.size()]){
      counts[0]++;
    }
    if (answers[i]==b[i%b.size()]){
      counts[1]++;
    }
    if (answers[i]==c[i%c.size()]){
      counts[2]++;
    }
  }
  auto max_count=*max_element(counts.begin(),counts.end());
  vector<int>result;
  for (int i=0;i<3;i++){
    if (max_count==counts[i]){
      result.push_back(i+1);
    }
  }
  return result;
}

int main(){
  vector<int> answers={1,3,2,4,2};
  vector<int> result=solution(answers);
  for(auto it:result){
    cout<<it<<" ";
  }
}