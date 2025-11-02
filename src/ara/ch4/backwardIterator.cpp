# include  <iostream>
# include  <vector>
# include  <map>
# include  <string>
# include <algorithm> 
using namespace std;

int main(){
  vector <int>vec={1,2,3,4,5};
  // 역방향 반복자 -> rbegin(), rend()
  for (auto it=vec.rbegin(); it!=vec.rend(); ++it){
    cout << * it<< " ";
  }
  cout << endl;
  // 탐색
  auto result=find(vec.rbegin(),vec.rend(),3);
  if (result!=vec.rend()){
    cout<<"found: "<<*result<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }
}