# include<iostream>
# include<map>
using namespace std;

// 맵 -> 키-값 쌍으로 데이터 저장
int main(){
  map<string,double> Map={
    {"ara",4.5}, // 내가 일등 ㅋ
    {"minsu",3.8},
    {"chiyeon",3.9}
  };
  // 값 접근 -> 대괄호 연산자, find()
  // 대괄호 -> 키가 없으면 맵에 현재 키를 추가한다는 것, 주의! O(log n)
  // find -> 키를 추가하지 않고 없는 상태 유지 -> 찾으면 위치 반환, 없으면 end() 반환 O(log n)
  // pair 객체 -> first, second
  int score_ara=Map["ara"];
  cout<<"ara's score: "<<score_ara<<endl; //4.5
  auto score_minsu=Map.find("minsu");
  if (score_minsu!=Map.end()){
    cout<<"found minsu's score: "<<score_minsu->second<<endl; //3.8
  }
  else{
    cout<<"minsu not found"<<endl;
  }
  // 맵 값 변경
  Map["chiyeon"]=4.2; //3.9 -> 4.2
  cout<<"chiyeon's updated score: "<<Map["chiyeon"]<<endl;
  // 삽입-> insert,[]
  // insert-> pair 객체 받음 -> make_pair 함수 사용, {}
  // 삭제 -> erase
  Map["jisu"]=3.7; // 삽입
  Map.insert({"hyunsoo",3.6}); // 삽입
  Map.insert(make_pair("taeho",3.5)); // 삽입
  for (const auto& pair: Map){
    cout<<pair.first<<": "<<pair.second<<endl;
  }

  auto it=Map.find("jisu");
  if (it!=Map.end()){
    Map.erase(it); 
  }
  for (const auto& pair: Map){
    cout<<pair.first<<": "<<pair.second<<endl;
  }
  return 0;
}