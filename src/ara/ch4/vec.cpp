// 컨테이너
# include <iostream>
# include <vector>

using namespace std;

int main(){
  vector <int> v; // int, char, string, double 등 모든 타입 가능
  vector <int> v2={1,2,3,4,5}; // 초기값 설정
  vector <int> v3(5);
  vector <int>  v4(5,10); // 크기 5, 초기값 10
  vector <int> v5(v4);
  
  // 2차원 
  vector <vector<int>> mat; // 빈 2차원 벡터
  int row=3, col=2;
  vector <vector<int>> mat2(row,vector<int>(col,0)); // 3x2 0으로 초기화된 2차원 벡터
  vector <vector<int>> mat3={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  }; // 초기값 설정
  int val=3;
  vector<vector<int>> mat4(row,vector<int>(col,val)); // 3x2 3으로 초기화된 2차원 벡터

  cout << mat2[1][1]<<" "<<mat3[2][2]<<" "<<mat4[0][1]<<endl;//0 9 3

  // 원소 변경
  vector<int> vec={1,2,3,4,5,6};
  vec[5]=10;
  *vec.begin()=6;
  cout<<vec[0]<<" "<<vec[5]<<endl; //6 10

  // 삽입 삭제
  vec.push_back(100); //push_back
  cout<<*vec.begin()<<endl; 
  cout<<vec.back()<<endl; //100
  vec.pop_back(); //pop_back
  cout<<vec.back()<<endl; //10

  // 맨 앞일때 -> insert, erase
  vec.insert(vec.begin(),50); //맨 앞에 50 삽입
  cout<<vec[0]<<endl; //50
  vec.erase(vec.begin());//맨 앞 원소 삭제
  cout<<vec[0]<<endl; //6
  return 0;
}

